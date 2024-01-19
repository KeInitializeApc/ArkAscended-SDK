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
// float                              InPlayRate                                                       (Edit, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPlayBothFirstAndThirdPerson                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bReplicate                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bReplicateToInstigator                                           (Edit, ExportObject, Net, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bPauseOnFinish1P                                                 (Net, EditFixedSize, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bForceTickPoseAndServerUpdateMesh                                (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bForceTickPoseOnServer                                           (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool AWeapClimbPick_C::BPOnWeaponAnimPlayedNotify(const struct FWeaponAnim& Animation, float* InPlayRate, bool bPlayBothFirstAndThirdPerson, bool bReplicate, bool bReplicateToInstigator, bool bPauseOnFinish1P, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPOnWeaponAnimPlayedNotify");

	Params::AWeapClimbPick_C_BPOnWeaponAnimPlayedNotify_Params Parms{};

	Parms.Animation = Animation;
	Parms.bPlayBothFirstAndThirdPerson = bPlayBothFirstAndThirdPerson;
	Parms.bReplicate = bReplicate;
	Parms.bReplicateToInstigator = bReplicateToInstigator;
	Parms.bPauseOnFinish1P = bPauseOnFinish1P;

	UObject::ProcessEvent(Func, &Parms);

	if (InPlayRate != nullptr)
		*InPlayRate = Parms.InPlayRate;

	if (bForceTickPoseAndServerUpdateMesh != nullptr)
		*bForceTickPoseAndServerUpdateMesh = Parms.bForceTickPoseAndServerUpdateMesh;

	if (bForceTickPoseOnServer != nullptr)
		*bForceTickPoseOnServer = Parms.bForceTickPoseOnServer;

	if (CallFunc_EqualEqual_ObjectObject_ReturnValue != nullptr)
		*CallFunc_EqualEqual_ObjectObject_ReturnValue = Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue;

	if (CallFunc_EqualEqual_ObjectObject_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_HasAuthority_ReturnValue                                (Edit, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetGroundLocation_theGroundLoc                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetGroundLocation_ReturnValue                           (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

bool AWeapClimbPick_C::StartUnequipEvent(bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_GetGroundLocation_theGroundLoc, bool* CallFunc_GetGroundLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "StartUnequipEvent");

	Params::AWeapClimbPick_C_StartUnequipEvent_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetGroundLocation_theGroundLoc = CallFunc_GetGroundLocation_theGroundLoc;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGroundLocation_ReturnValue != nullptr)
		*CallFunc_GetGroundLocation_ReturnValue = Parms.CallFunc_GetGroundLocation_ReturnValue;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InFOV                                                            (ConstParm, BlueprintVisible, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

float AWeapClimbPick_C::BPModifyFOV(float* InFOV, float ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPModifyFOV");

	Params::AWeapClimbPick_C_BPModifyFOV_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InFOV != nullptr)
		*InFOV = Parms.InFOV;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    Particle_System                                                  (ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     NewSourcePoint                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)

int32 AWeapClimbPick_C::SetSourceLocation(const struct FVector& NewSourcePoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "SetSourceLocation");

	Params::AWeapClimbPick_C_SetSourceLocation_Params Parms{};

	Parms.NewSourcePoint = NewSourcePoint;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    Particle_System                                                  (ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UParticleSystem*             New_Template                                                     (Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

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
// float                              DeltaSeconds                                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bClimbing                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     AnchorPosition                                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     AnchorNormal                                                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bCanClimb                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bCanLand                                                         (EditFixedSize, Parm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ClimbLocation                                                    (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ClimbNormal                                                      (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bHudVisible                                                      (ConstParm, ExportObject, Net, Parm, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     SourceTangent                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetViewDirection_ReturnValue                            (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetViewLocation_ReturnValue                             (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue_1                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_NegateVector_ReturnValue                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue_1                                 (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// uint8                              Temp_byte_Variable                                               (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue_1                                 (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_1                    (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue_1                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)

double AWeapClimbPick_C::BPUpdateClimbTarget(const struct FVector& SourceTangent, bool CallFunc_IsClimbingHanging_ReturnValue, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue_1, const struct FVector& CallFunc_GetViewDirection_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, struct FVector* CallFunc_VInterpTo_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, struct FRotator* CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FVector& CallFunc_GetViewLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1, double* CallFunc_FClamp_ReturnValue_1, struct FVector* CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double* CallFunc_Dot_VectorVector_ReturnValue, struct FVector* CallFunc_GetActorUpVector_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_GetActorUpVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_NegateVector_ReturnValue, struct FVector* CallFunc_VInterpTo_ReturnValue_1, struct FVector* CallFunc_SelectVector_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue_1, struct FRotator* CallFunc_RInterpTo_ReturnValue_1, const struct FVector& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue, float* CallFunc_VInterpTo_InterpSpeed_ImplicitCast, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast, float* CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast, float* CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast, float* CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPUpdateClimbTarget");

	Params::AWeapClimbPick_C_BPUpdateClimbTarget_Params Parms{};

	Parms.SourceTangent = SourceTangent;
	Parms.CallFunc_IsClimbingHanging_ReturnValue = CallFunc_IsClimbingHanging_ReturnValue;
	Parms.CallFunc_GetViewDirection_ReturnValue = CallFunc_GetViewDirection_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_GetViewLocation_ReturnValue = CallFunc_GetViewLocation_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1 = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_NegateVector_ReturnValue = CallFunc_NegateVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue_1 = CallFunc_K2_GetComponentRotation_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult_1 = CallFunc_K2_SetWorldLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult_1 = CallFunc_K2_SetWorldRotation_SweepHitResult_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_RInterpTo_InterpSpeed_ImplicitCast = CallFunc_RInterpTo_InterpSpeed_ImplicitCast;
	Parms.CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1 = CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_VectorToRotator_ReturnValue != nullptr)
		*CallFunc_Conv_VectorToRotator_ReturnValue = std::move(Parms.CallFunc_Conv_VectorToRotator_ReturnValue);

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_Conv_VectorToRotator_ReturnValue_1 != nullptr)
		*CallFunc_Conv_VectorToRotator_ReturnValue_1 = std::move(Parms.CallFunc_Conv_VectorToRotator_ReturnValue_1);

	if (CallFunc_VInterpTo_ReturnValue != nullptr)
		*CallFunc_VInterpTo_ReturnValue = std::move(Parms.CallFunc_VInterpTo_ReturnValue);

	if (CallFunc_RInterpTo_ReturnValue != nullptr)
		*CallFunc_RInterpTo_ReturnValue = std::move(Parms.CallFunc_RInterpTo_ReturnValue);

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

	if (CallFunc_Dot_VectorVector_ReturnValue_1 != nullptr)
		*CallFunc_Dot_VectorVector_ReturnValue_1 = Parms.CallFunc_Dot_VectorVector_ReturnValue_1;

	if (CallFunc_GetActorForwardVector_ReturnValue != nullptr)
		*CallFunc_GetActorForwardVector_ReturnValue = std::move(Parms.CallFunc_GetActorForwardVector_ReturnValue);

	if (CallFunc_GetActorUpVector_ReturnValue_1 != nullptr)
		*CallFunc_GetActorUpVector_ReturnValue_1 = std::move(Parms.CallFunc_GetActorUpVector_ReturnValue_1);

	if (CallFunc_VInterpTo_ReturnValue_1 != nullptr)
		*CallFunc_VInterpTo_ReturnValue_1 = std::move(Parms.CallFunc_VInterpTo_ReturnValue_1);

	if (CallFunc_SelectVector_ReturnValue != nullptr)
		*CallFunc_SelectVector_ReturnValue = std::move(Parms.CallFunc_SelectVector_ReturnValue);

	if (CallFunc_RInterpTo_ReturnValue_1 != nullptr)
		*CallFunc_RInterpTo_ReturnValue_1 = std::move(Parms.CallFunc_RInterpTo_ReturnValue_1);

	if (CallFunc_VInterpTo_InterpSpeed_ImplicitCast != nullptr)
		*CallFunc_VInterpTo_InterpSpeed_ImplicitCast = Parms.CallFunc_VInterpTo_InterpSpeed_ImplicitCast;

	if (CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast != nullptr)
		*CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast = Parms.CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast;

	if (CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast != nullptr)
		*CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast = Parms.CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast;

	if (CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1 != nullptr)
		*CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1 = Parms.CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


