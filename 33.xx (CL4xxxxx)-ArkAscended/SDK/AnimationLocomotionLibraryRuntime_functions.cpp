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
// struct FVector                     Velocity                                                         (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, InstancedReference)
// bool                               bUseSeparateBrakingFriction                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              BrakingFriction                                                  (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              GroundFriction                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              BrakingFrictionFactor                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              BrakingDecelerationWalking                                       (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation(const struct FVector& Velocity, bool* bUseSeparateBrakingFriction, float* BrakingFriction, float* GroundFriction, float* BrakingFrictionFactor, struct FVector* ReturnValue)
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

	if (bUseSeparateBrakingFriction != nullptr)
		*bUseSeparateBrakingFriction = Parms.bUseSeparateBrakingFriction;

	if (BrakingFriction != nullptr)
		*BrakingFriction = Parms.BrakingFriction;

	if (GroundFriction != nullptr)
		*GroundFriction = Parms.GroundFriction;

	if (BrakingFrictionFactor != nullptr)
		*BrakingFrictionFactor = Parms.BrakingFrictionFactor;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Acceleration                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// struct FVector                     Velocity                                                         (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, InstancedReference)
// float                              GroundFriction                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UAnimCharacterMovementLibrary::PredictGroundMovementPivotLocation(const struct FVector& Velocity, float* GroundFriction, struct FVector* ReturnValue)
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

	if (GroundFriction != nullptr)
		*GroundFriction = Parms.GroundFriction;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              SpeedToMatch                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   PlayRateClamp                                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed(const struct FSequencePlayerReference& SequencePlayer, float* SpeedToMatch, struct FVector2D* PlayRateClamp, struct FSequencePlayerReference* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "SetPlayrateToMatchSpeed");

	Params::UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SpeedToMatch != nullptr)
		*SpeedToMatch = Parms.SpeedToMatch;

	if (PlayRateClamp != nullptr)
		*PlayRateClamp = std::move(Parms.PlayRateClamp);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              DistanceToTarget                                                 (BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class FName                        DistanceCurveName                                                (Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAnimDistanceMatchingLibrary::DistanceMatchToTarget(struct FSequenceEvaluatorReference* SequenceEvaluator, float* DistanceToTarget, class FName* DistanceCurveName, struct FSequenceEvaluatorReference* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "DistanceMatchToTarget");

	Params::UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequenceEvaluator != nullptr)
		*SequenceEvaluator = std::move(Parms.SequenceEvaluator);

	if (DistanceToTarget != nullptr)
		*DistanceToTarget = Parms.DistanceToTarget;

	if (DistanceCurveName != nullptr)
		*DistanceCurveName = Parms.DistanceCurveName;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              DistanceTraveled                                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class FName                        DistanceCurveName                                                (Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   PlayRateClamp                                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching(struct FAnimUpdateContext* UpdateContext, struct FSequenceEvaluatorReference* SequenceEvaluator, float* DistanceTraveled, class FName* DistanceCurveName, struct FVector2D* PlayRateClamp, struct FSequenceEvaluatorReference* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "AdvanceTimeByDistanceMatching");

	Params::UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UpdateContext != nullptr)
		*UpdateContext = std::move(Parms.UpdateContext);

	if (SequenceEvaluator != nullptr)
		*SequenceEvaluator = std::move(Parms.SequenceEvaluator);

	if (DistanceTraveled != nullptr)
		*DistanceTraveled = Parms.DistanceTraveled;

	if (DistanceCurveName != nullptr)
		*DistanceCurveName = Parms.DistanceCurveName;

	if (PlayRateClamp != nullptr)
		*PlayRateClamp = std::move(Parms.PlayRateClamp);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}

}


