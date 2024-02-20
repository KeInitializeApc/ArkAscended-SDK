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
// struct FWeaponAnim                 Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)
// float                              InPlayRate                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               bPlayBothFirstAndThirdPerson                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bReplicate                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bReplicateToInstigator                                           (Edit, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bPauseOnFinish1P                                                 (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bForceTickPoseAndServerUpdateMesh                                (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bForceTickPoseOnServer                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool AWeapClimbPick_C::BPOnWeaponAnimPlayedNotify(bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPOnWeaponAnimPlayedNotify");

	Params::AWeapClimbPick_C_BPOnWeaponAnimPlayedNotify_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bForceTickPoseAndServerUpdateMesh != nullptr)
		*bForceTickPoseAndServerUpdateMesh = Parms.bForceTickPoseAndServerUpdateMesh;

	if (bForceTickPoseOnServer != nullptr)
		*bForceTickPoseOnServer = Parms.bForceTickPoseOnServer;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetGroundLocation_theGroundLoc                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetGroundLocation_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

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
// float                              InFOV                                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)

double AWeapClimbPick_C::BPModifyFOV(float ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float* K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPModifyFOV");

	Params::AWeapClimbPick_C_BPModifyFOV_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_FunctionResult_ReturnValue_ImplicitCast != nullptr)
		*K2Node_FunctionResult_ReturnValue_ImplicitCast = Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast;

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    Particle_System                                                  (ExportObject, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     NewSourcePoint                                                   (ConstParm, BlueprintVisible, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

int32 AWeapClimbPick_C::SetSourceLocation(struct FVector* NewSourcePoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "SetSourceLocation");

	Params::AWeapClimbPick_C_SetSourceLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewSourcePoint != nullptr)
		*NewSourcePoint = std::move(Parms.NewSourcePoint);

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    Particle_System                                                  (ExportObject, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UParticleSystem*             New_Template                                                     (Edit, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

class UParticleSystem* AWeapClimbPick_C::SetTemplateTo(bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "SetTemplateTo");

	Params::AWeapClimbPick_C_SetTemplateTo_Params Parms{};

	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bClimbing                                                        (BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     AnchorPosition                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     AnchorNormal                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bCanClimb                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bCanLand                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ClimbLocation                                                    (ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ClimbNormal                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bHudVisible                                                      (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     SourceTangent                                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetViewDirection_ReturnValue                            (ExportObject, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetViewLocation_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorRightVector_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue_1                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference, Interp)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_NegateVector_ReturnValue                                (Edit, ConstParm, ExportObject, Parm, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue_1                                 (Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
// uint8                              Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue_1                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult_1                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue_1                                     (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_SetBeamTargetStrength_NewTargetStrength_ImplicitCast    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_SetBeamSourceStrength_NewSourceStrength_ImplicitCast    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast_1                    (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_RInterpTo_InterpSpeed_ImplicitCast_1                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, SubobjectReference, Interp)

float AWeapClimbPick_C::BPUpdateClimbTarget(struct FVector* SourceTangent, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, struct FVector* CallFunc_GetActorRightVector_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue, struct FVector* CallFunc_GetActorUpVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue_1, struct FVector* CallFunc_GetActorForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, struct FVector* CallFunc_GetActorUpVector_ReturnValue_1, uint8* Temp_byte_Variable, struct FVector* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapClimbPick_C", "BPUpdateClimbTarget");

	Params::AWeapClimbPick_C_BPUpdateClimbTarget_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SourceTangent != nullptr)
		*SourceTangent = std::move(Parms.SourceTangent);

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

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	return Parms.ReturnValue;

}

}


