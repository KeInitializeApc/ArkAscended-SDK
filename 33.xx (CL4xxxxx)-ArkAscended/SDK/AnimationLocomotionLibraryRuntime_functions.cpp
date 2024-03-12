#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary
// (None)

class UClass* UAnimCharacterMovementLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimCharacterMovementLibrary");

	return Clss;
}


// AnimCharacterMovementLibrary AnimationLocomotionLibraryRuntime.Default__AnimCharacterMovementLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimCharacterMovementLibrary* UAnimCharacterMovementLibrary::GetDefaultObj()
{
	static class UAnimCharacterMovementLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimCharacterMovementLibrary*>(UAnimCharacterMovementLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementStopLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Velocity                                                         (Config, EditConst, GlobalConfig)
// bool                               bUseSeparateBrakingFriction                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              BrakingFriction                                                  (ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              GroundFriction                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              BrakingFrictionFactor                                            (ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              BrakingDecelerationWalking                                       (Edit, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation(const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimCharacterMovementLibrary", "PredictGroundMovementStopLocation");

	Params::UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Params Parms{};

	Parms.Velocity = Velocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Acceleration                                                     (Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// struct FVector                     Velocity                                                         (Config, EditConst, GlobalConfig)
// float                              GroundFriction                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UAnimCharacterMovementLibrary::PredictGroundMovementPivotLocation(const struct FVector& Velocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimCharacterMovementLibrary", "PredictGroundMovementPivotLocation");

	Params::UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Params Parms{};

	Parms.Velocity = Velocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary
// (None)

class UClass* UAnimDistanceMatchingLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimDistanceMatchingLibrary");

	return Clss;
}


// AnimDistanceMatchingLibrary AnimationLocomotionLibraryRuntime.Default__AnimDistanceMatchingLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimDistanceMatchingLibrary* UAnimDistanceMatchingLibrary::GetDefaultObj()
{
	static class UAnimDistanceMatchingLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimDistanceMatchingLibrary*>(UAnimDistanceMatchingLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.SetPlayrateToMatchSpeed
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// float                              SpeedToMatch                                                     (Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   PlayRateClamp                                                    (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequencePlayerReference UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed(struct FSequencePlayerReference* SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "SetPlayrateToMatchSpeed");

	Params::UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DistanceToTarget                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        DistanceCurveName                                                (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference UAnimDistanceMatchingLibrary::DistanceMatchToTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "DistanceMatchToTarget");

	Params::UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              DistanceTraveled                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        DistanceCurveName                                                (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   PlayRateClamp                                                    (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "AdvanceTimeByDistanceMatching");

	Params::UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


