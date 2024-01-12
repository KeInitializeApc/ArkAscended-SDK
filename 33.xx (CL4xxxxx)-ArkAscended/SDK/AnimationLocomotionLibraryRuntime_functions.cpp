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
// struct FVector                     Velocity                                                         (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
// bool                               bUseSeparateBrakingFriction                                      (Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              BrakingFriction                                                  (Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              GroundFriction                                                   (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              BrakingFrictionFactor                                            (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              BrakingDecelerationWalking                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UAnimCharacterMovementLibrary::PredictGroundMovementStopLocation(float* BrakingDecelerationWalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimCharacterMovementLibrary", "PredictGroundMovementStopLocation");

	Params::UAnimCharacterMovementLibrary_PredictGroundMovementStopLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BrakingDecelerationWalking != nullptr)
		*BrakingDecelerationWalking = Parms.BrakingDecelerationWalking;

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimCharacterMovementLibrary.PredictGroundMovementPivotLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Acceleration                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// struct FVector                     Velocity                                                         (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
// float                              GroundFriction                                                   (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UAnimCharacterMovementLibrary::PredictGroundMovementPivotLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimCharacterMovementLibrary", "PredictGroundMovementPivotLocation");

	Params::UAnimCharacterMovementLibrary_PredictGroundMovementPivotLocation_Params Parms{};


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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              SpeedToMatch                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   PlayRateClamp                                                    (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencePlayerReference UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimDistanceMatchingLibrary", "SetPlayrateToMatchSpeed");

	Params::UAnimDistanceMatchingLibrary_SetPlayrateToMatchSpeed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimationLocomotionLibraryRuntime.AnimDistanceMatchingLibrary.DistanceMatchToTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              DistanceToTarget                                                 (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class FName                        DistanceCurveName                                                (EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              DistanceTraveled                                                 (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class FName                        DistanceCurveName                                                (EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   PlayRateClamp                                                    (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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


