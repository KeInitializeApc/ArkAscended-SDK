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
// float                              InPlayRate                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
// bool                               bPlayBothFirstAndThirdPerson                                     (ExportObject, EditFixedSize, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bReplicate                                                       (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bReplicateToInstigator                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bPauseOnFinish1P                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bForceTickPoseAndServerUpdateMesh                                (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bForceTickPoseOnServer                                           (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

bool AWeapClimbPick_C::BPOnWeaponAnimPlayedNotify(const struct FWeaponAnim& Animation, float* InPlayRate, bool* bPlayBothFirstAndThirdPerson, bool bReplicate, bool* bReplicateToInstigator, bool* bPauseOnFinish1P, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPOnWeaponAnimPlayedNotify");

	Params::AWeapClimbPick_C_BPOnWeaponAnimPlayedNotify_Params Parms{};

	Parms.Animation = Animation;
	Parms.bReplicate = bReplicate;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (InPlayRate != nullptr)
		*InPlayRate = Parms.InPlayRate;

	if (bPlayBothFirstAndThirdPerson != nullptr)
		*bPlayBothFirstAndThirdPerson = Parms.bPlayBothFirstAndThirdPerson;

	if (bReplicateToInstigator != nullptr)
		*bReplicateToInstigator = Parms.bReplicateToInstigator;

	if (bPauseOnFinish1P != nullptr)
		*bPauseOnFinish1P = Parms.bPauseOnFinish1P;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetGroundLocation_theGroundLoc                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// bool                               CallFunc_GetGroundLocation_ReturnValue                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

void AWeapClimbPick_C::StartUnequipEvent(const struct FVector& CallFunc_MakeVector_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, struct FVector* CallFunc_GetGroundLocation_theGroundLoc, bool* CallFunc_GetGroundLocation_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "StartUnequipEvent");

	Params::AWeapClimbPick_C_StartUnequipEvent_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_GetActorLocation_ReturnValue != nullptr)
		*CallFunc_K2_GetActorLocation_ReturnValue = std::move(Parms.CallFunc_K2_GetActorLocation_ReturnValue);

	if (CallFunc_GetGroundLocation_theGroundLoc != nullptr)
		*CallFunc_GetGroundLocation_theGroundLoc = std::move(Parms.CallFunc_GetGroundLocation_theGroundLoc);

	if (CallFunc_GetGroundLocation_ReturnValue != nullptr)
		*CallFunc_GetGroundLocation_ReturnValue = Parms.CallFunc_GetGroundLocation_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InFOV                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

double AWeapClimbPick_C::BPModifyFOV(float* InFOV, float* ReturnValue, double CallFunc_SelectFloat_ReturnValue, float* K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPModifyFOV");

	Params::AWeapClimbPick_C_BPModifyFOV_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InFOV != nullptr)
		*InFOV = Parms.InFOV;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (K2Node_FunctionResult_ReturnValue_ImplicitCast != nullptr)
		*K2Node_FunctionResult_ReturnValue_ImplicitCast = Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    Particle_System                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// struct FVector                     NewSourcePoint                                                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

int32 AWeapClimbPick_C::SetSourceLocation(struct FVector* NewSourcePoint, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "SetSourceLocation");

	Params::AWeapClimbPick_C_SetSourceLocation_Params Parms{};

	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewSourcePoint != nullptr)
		*NewSourcePoint = std::move(Parms.NewSourcePoint);

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    Particle_System                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// class UParticleSystem*             New_Template                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

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
// float                              DeltaSeconds                                                     (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bClimbing                                                        (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     AnchorPosition                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     AnchorNormal                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bCanClimb                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bCanLand                                                         (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ClimbLocation                                                    (ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ClimbNormal                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bHudVisible                                                      (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     SourceTangent                                                    (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetViewDirection_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (Edit, BlueprintVisible, ReturnParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (Edit, ConstParm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ConstParm, ExportObject, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetViewLocation_ReturnValue                             (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (Edit, BlueprintVisible, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (Edit, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue_1                          (Edit, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (Edit, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (Edit, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_NegateVector_ReturnValue                                (Edit, Net, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue_1                                 (Edit, ConstParm, OutParm, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// uint8                              Temp_byte_Variable                                               (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue_1                                 (ConstParm, ExportObject, Parm, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_1                    (Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (Edit, BlueprintVisible, ReturnParm, Config, EditConst, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue_1                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference)
// float                              CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast    (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// float                              CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast    (BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1                    (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference, Interp)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, SubobjectReference, Interp)

float AWeapClimbPick_C::BPUpdateClimbTarget(bool bClimbing, const struct FVector& AnchorPosition, const struct FVector& AnchorNormal, bool bCanClimb, bool bCanLand, const struct FVector& ClimbLocation, const struct FVector& ClimbNormal, bool bHudVisible, bool* CallFunc_IsClimbingHanging_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, struct FVector* CallFunc_GetViewDirection_ReturnValue, struct FVector* CallFunc_GetViewLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, struct FVector* CallFunc_GetActorRightVector_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue, struct FVector* CallFunc_GetActorUpVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, struct FVector* CallFunc_GetActorUpVector_ReturnValue_1, struct FVector* CallFunc_Add_VectorVector_ReturnValue, struct FVector* CallFunc_Add_VectorVector_ReturnValue_1, struct FVector* CallFunc_Normal_ReturnValue, struct FVector* CallFunc_Normal_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPUpdateClimbTarget");

	Params::AWeapClimbPick_C_BPUpdateClimbTarget_Params Parms{};

	Parms.bClimbing = bClimbing;
	Parms.AnchorPosition = AnchorPosition;
	Parms.AnchorNormal = AnchorNormal;
	Parms.bCanClimb = bCanClimb;
	Parms.bCanLand = bCanLand;
	Parms.ClimbLocation = ClimbLocation;
	Parms.ClimbNormal = ClimbNormal;
	Parms.bHudVisible = bHudVisible;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue_1 = CallFunc_Conv_VectorToRotator_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsClimbingHanging_ReturnValue != nullptr)
		*CallFunc_IsClimbingHanging_ReturnValue = Parms.CallFunc_IsClimbingHanging_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_GetViewDirection_ReturnValue != nullptr)
		*CallFunc_GetViewDirection_ReturnValue = std::move(Parms.CallFunc_GetViewDirection_ReturnValue);

	if (CallFunc_GetViewLocation_ReturnValue != nullptr)
		*CallFunc_GetViewLocation_ReturnValue = std::move(Parms.CallFunc_GetViewLocation_ReturnValue);

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_GetActorRightVector_ReturnValue != nullptr)
		*CallFunc_GetActorRightVector_ReturnValue = std::move(Parms.CallFunc_GetActorRightVector_ReturnValue);

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

	if (CallFunc_Add_VectorVector_ReturnValue != nullptr)
		*CallFunc_Add_VectorVector_ReturnValue = std::move(Parms.CallFunc_Add_VectorVector_ReturnValue);

	if (CallFunc_Add_VectorVector_ReturnValue_1 != nullptr)
		*CallFunc_Add_VectorVector_ReturnValue_1 = std::move(Parms.CallFunc_Add_VectorVector_ReturnValue_1);

	if (CallFunc_Normal_ReturnValue != nullptr)
		*CallFunc_Normal_ReturnValue = std::move(Parms.CallFunc_Normal_ReturnValue);

	if (CallFunc_Normal_ReturnValue_1 != nullptr)
		*CallFunc_Normal_ReturnValue_1 = std::move(Parms.CallFunc_Normal_ReturnValue_1);

	if (CallFunc_Subtract_VectorVector_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue_1 = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue_1);

	return Parms.ReturnValue;

}

}


