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
// struct FVector                     Velocity                                                         (Edit, ReturnParm, Config, EditConst, SubobjectReference)
// bool                               bUseSeparateBrakingFriction                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// float                              BrakingFriction                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// float                              GroundFriction                                                   (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// float                              BrakingFrictionFactor                                            (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// float                              BrakingDecelerationWalking                                       (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation(bool* bUseSeparateBrakingFriction, float* BrakingFriction, float* GroundFriction, float* BrakingFrictionFactor, const struct FVector& ReturnValue)
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

	if (bUseSeparateBrakingFriction != nullptr)
		*bUseSeparateBrakingFriction = Parms.bUseSeparateBrakingFriction;

	if (BrakingFriction != nullptr)
		*BrakingFriction = Parms.BrakingFriction;

	if (GroundFriction != nullptr)
		*GroundFriction = Parms.GroundFriction;

	if (BrakingFrictionFactor != nullptr)
		*BrakingFrictionFactor = Parms.BrakingFrictionFactor;

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Acceleration                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// struct FVector                     Velocity                                                         (Edit, ReturnParm, Config, EditConst, SubobjectReference)
// float                              GroundFriction                                                   (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UAnimCharacterMovementLibrary::PredictGroundMovementPivotLocation(float* GroundFriction, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimCharacterMovementLibrary", "PredictGroundMovementPivotLocation");

	Params::UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (GroundFriction != nullptr)
		*GroundFriction = Parms.GroundFriction;

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
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// float                              SpeedToMatch                                                     (BlueprintVisible, ExportObject, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   PlayRateClamp                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed(const struct FSequencePlayerReference& SequencePlayer, float SpeedToMatch, struct FVector2D* PlayRateClamp, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "SetPlayrateToMatchSpeed");

	Params::UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.SpeedToMatch = SpeedToMatch;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayRateClamp != nullptr)
		*PlayRateClamp = std::move(Parms.PlayRateClamp);

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// float                              DistanceToTarget                                                 (Edit, ConstParm, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class FName                        DistanceCurveName                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAnimDistanceMatchingLibrary::DistanceMatchToTarget(const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, class FName* DistanceCurveName, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "DistanceMatchToTarget");

	Params::UAnimDistanceMatchingLibrary_DistanceMatchToTarget_Params Parms{};

	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.DistanceToTarget = DistanceToTarget;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DistanceCurveName != nullptr)
		*DistanceCurveName = Parms.DistanceCurveName;

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.AdvanceTimeByDistanceMatching
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// float                              DistanceTraveled                                                 (ExportObject, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class FName                        DistanceCurveName                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   PlayRateClamp                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, class FName* DistanceCurveName, struct FVector2D* PlayRateClamp, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "AdvanceTimeByDistanceMatching");

	Params::UAnimDistanceMatchingLibrary_AdvanceTimeByDistanceMatching_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.DistanceTraveled = DistanceTraveled;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DistanceCurveName != nullptr)
		*DistanceCurveName = Parms.DistanceCurveName;

	if (PlayRateClamp != nullptr)
		*PlayRateClamp = std::move(Parms.PlayRateClamp);

}

}


