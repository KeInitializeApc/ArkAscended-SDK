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
// struct FVector                     Velocity                                                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               bUseSeparateBrakingFriction                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// float                              BrakingFriction                                                  (ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// float                              GroundFriction                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// float                              BrakingFrictionFactor                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// float                              BrakingDecelerationWalking                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimCharacterMovementLibrary", "PredictGroundMovementStopLocation");

	Params::UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Acceleration                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// struct FVector                     Velocity                                                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// float                              GroundFriction                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UAnimCharacterMovementLibrary::PredictGroundMovementPivotLocation(const struct FVector& Acceleration, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimCharacterMovementLibrary", "PredictGroundMovementPivotLocation");

	Params::UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Params Parms{};

	Parms.Acceleration = Acceleration;
	Parms.ReturnValue = ReturnValue;

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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              SpeedToMatch                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector2D                   PlayRateClamp                                                    (ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed(const struct FSequencePlayerReference& SequencePlayer, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "SetPlayrateToMatchSpeed");

	Params::UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// float                              DistanceToTarget                                                 (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// class FName                        DistanceCurveName                                                (ExportObject, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UAnimDistanceMatchingLibrary::DistanceMatchToTarget(const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "DistanceMatchToTarget");

	Params::UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// float                              DistanceTraveled                                                 (ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// class FName                        DistanceCurveName                                                (ExportObject, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FVector2D                   PlayRateClamp                                                    (ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching(const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "AdvanceTimeByDistanceMatching");

	Params::UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


