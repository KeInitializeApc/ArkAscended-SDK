#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnimGraphRuntime.BlendSpaceLibrary
// (None)

class UClass* UBlendSpaceLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlendSpaceLibrary");

	return Clss;
}


// BlendSpaceLibrary AnimGraphRuntime.Default__BlendSpaceLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlendSpaceLibrary* UBlendSpaceLibrary::GetDefaultObj()
{
	static class UBlendSpaceLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlendSpaceLibrary*>(UBlendSpaceLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.BlendSpaceLibrary.SnapToPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBlendSpaceReference        BlendSpace                                                       (ExportObject, Net, EditFixedSize, OutParm, EditConst, DuplicateTransient)
// struct FVector                     NewPosition                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector UBlendSpaceLibrary::SnapToPosition(struct FBlendSpaceReference* BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "SnapToPosition");

	Params::UBlendSpaceLibrary_SnapToPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendSpace != nullptr)
		*BlendSpace = std::move(Parms.BlendSpace);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpaceReference        BlendSpace                                                       (ExportObject, Net, EditFixedSize, OutParm, EditConst, DuplicateTransient)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBlendSpaceLibrary::GetPosition(struct FBlendSpaceReference* BlendSpace, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "GetPosition");

	Params::UBlendSpaceLibrary_GetPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendSpace != nullptr)
		*BlendSpace = std::move(Parms.BlendSpace);

}


// Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpaceReference        BlendSpace                                                       (ExportObject, Net, EditFixedSize, OutParm, EditConst, DuplicateTransient)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBlendSpaceLibrary::GetFilteredPosition(struct FBlendSpaceReference* BlendSpace, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "GetFilteredPosition");

	Params::UBlendSpaceLibrary_GetFilteredPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendSpace != nullptr)
		*BlendSpace = std::move(Parms.BlendSpace);

}


// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FBlendSpaceReference        BlendSpace                                                       (ExportObject, Net, EditFixedSize, OutParm, EditConst, DuplicateTransient)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference UBlendSpaceLibrary::ConvertToBlendSpacePure(struct FBlendSpaceReference* BlendSpace, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "ConvertToBlendSpacePure");

	Params::UBlendSpaceLibrary_ConvertToBlendSpacePure_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendSpace != nullptr)
		*BlendSpace = std::move(Parms.BlendSpace);

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FBlendSpaceReference        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimNodeReference UBlendSpaceLibrary::ConvertToBlendSpace(enum class EAnimNodeReferenceConversionResult* Result, const struct FBlendSpaceReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "ConvertToBlendSpace");

	Params::UBlendSpaceLibrary_ConvertToBlendSpace_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Class AnimGraphRuntime.AnimationStateMachineLibrary
// (None)

class UClass* UAnimationStateMachineLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimationStateMachineLibrary");

	return Clss;
}


// AnimationStateMachineLibrary AnimGraphRuntime.Default__AnimationStateMachineLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimationStateMachineLibrary* UAnimationStateMachineLibrary::GetDefaultObj()
{
	static class UAnimationStateMachineLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimationStateMachineLibrary*>(UAnimationStateMachineLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.SetState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FAnimationStateMachineReferenceNode                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// class FName                        TargetState                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Duration                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
// enum class ETransitionLogicType    BlendType                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UBlendProfile*               BlendProfile                                                     (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// enum class EAlphaBlendOption       AlphaBlendOption                                                 (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UCurveFloat*                 CustomBlendCurve                                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UCurveFloat* UAnimationStateMachineLibrary::SetState(const struct FAnimUpdateContext& UpdateContext, float Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "SetState");

	Params::UAnimationStateMachineLibrary_SetState_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.Duration = Duration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimationStateResultReference UAnimationStateMachineLibrary::IsStateBlendingOut(const struct FAnimUpdateContext& UpdateContext, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "IsStateBlendingOut");

	Params::UAnimationStateMachineLibrary_IsStateBlendingOut_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimationStateResultReference UAnimationStateMachineLibrary::IsStateBlendingIn(const struct FAnimUpdateContext& UpdateContext, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "IsStateBlendingIn");

	Params::UAnimationStateMachineLibrary_IsStateBlendingIn_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FAnimationStateMachineReferenceNode                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// class FName                        ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimationStateMachineReference UAnimationStateMachineLibrary::GetState(const struct FAnimUpdateContext& UpdateContext, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "GetState");

	Params::UAnimationStateMachineLibrary_GetState_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimationStateResultReference UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction(const struct FAnimUpdateContext& UpdateContext, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "GetRelevantAnimTimeRemainingFraction");

	Params::UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimationStateResultReference UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining(const struct FAnimUpdateContext& UpdateContext, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "GetRelevantAnimTimeRemaining");

	Params::UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FAnimationStateResultReferenceAnimationState                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference UAnimationStateMachineLibrary::ConvertToAnimationStateResultPure(const struct FAnimationStateResultReference& AnimationState, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateResultPure");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Params Parms{};

	Parms.AnimationState = AnimationState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FAnimationStateResultReferenceAnimationState                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference UAnimationStateMachineLibrary::ConvertToAnimationStateResult(const struct FAnimationStateResultReference& AnimationState, enum class EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateResult");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Params Parms{};

	Parms.AnimationState = AnimationState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FAnimationStateMachineReferenceAnimationState                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference UAnimationStateMachineLibrary::ConvertToAnimationStateMachinePure(const struct FAnimationStateMachineReference& AnimationState, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateMachinePure");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Params Parms{};

	Parms.AnimationState = AnimationState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FAnimationStateMachineReferenceAnimationState                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference UAnimationStateMachineLibrary::ConvertToAnimationStateMachine(const struct FAnimationStateMachineReference& AnimationState, enum class EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateMachine");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Params Parms{};

	Parms.AnimationState = AnimationState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Class AnimGraphRuntime.AnimExecutionContextLibrary
// (None)

class UClass* UAnimExecutionContextLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimExecutionContextLibrary");

	return Clss;
}


// AnimExecutionContextLibrary AnimGraphRuntime.Default__AnimExecutionContextLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimExecutionContextLibrary* UAnimExecutionContextLibrary::GetDefaultObj()
{
	static class UAnimExecutionContextLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimExecutionContextLibrary*>(UAnimExecutionContextLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetDeltaTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimUpdateContext UAnimExecutionContextLibrary::GetDeltaTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetDeltaTime");

	Params::UAnimExecutionContextLibrary_GetDeltaTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimUpdateContext UAnimExecutionContextLibrary::GetCurrentWeight(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetCurrentWeight");

	Params::UAnimExecutionContextLibrary_GetCurrentWeight_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimInstance*               Instance                                                         (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FAnimNodeReference          ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UAnimExecutionContextLibrary::GetAnimNodeReference(const struct FAnimNodeReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetAnimNodeReference");

	Params::UAnimExecutionContextLibrary_GetAnimNodeReference_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UAnimInstance*               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimExecutionContext UAnimExecutionContextLibrary::GetAnimInstance(class UAnimInstance* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetAnimInstance");

	Params::UAnimExecutionContextLibrary_GetAnimInstance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FAnimUpdateContext          ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimExecutionContext UAnimExecutionContextLibrary::ConvertToUpdateContext(enum class EAnimExecutionContextConversionResult* Result, const struct FAnimUpdateContext& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToUpdateContext");

	Params::UAnimExecutionContextLibrary_ConvertToUpdateContext_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FAnimPoseContext            ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimExecutionContext UAnimExecutionContextLibrary::ConvertToPoseContext(enum class EAnimExecutionContextConversionResult* Result, const struct FAnimPoseContext& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToPoseContext");

	Params::UAnimExecutionContextLibrary_ConvertToPoseContext_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FAnimInitializationContext  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimExecutionContext UAnimExecutionContextLibrary::ConvertToInitializationContext(enum class EAnimExecutionContextConversionResult* Result, const struct FAnimInitializationContext& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToInitializationContext");

	Params::UAnimExecutionContextLibrary_ConvertToInitializationContext_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FAnimComponentSpacePoseContextReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimExecutionContext UAnimExecutionContextLibrary::ConvertToComponentSpacePoseContext(enum class EAnimExecutionContextConversionResult* Result, const struct FAnimComponentSpacePoseContext& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToComponentSpacePoseContext");

	Params::UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// (None)

class UClass* UAnimNotify_PlayMontageNotify::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayMontageNotify");

	return Clss;
}


// AnimNotify_PlayMontageNotify AnimGraphRuntime.Default__AnimNotify_PlayMontageNotify
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_PlayMontageNotify* UAnimNotify_PlayMontageNotify::GetDefaultObj()
{
	static class UAnimNotify_PlayMontageNotify* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayMontageNotify*>(UAnimNotify_PlayMontageNotify::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// (None)

class UClass* UAnimNotify_PlayMontageNotifyWindow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_PlayMontageNotifyWindow");

	return Clss;
}


// AnimNotify_PlayMontageNotifyWindow AnimGraphRuntime.Default__AnimNotify_PlayMontageNotifyWindow
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_PlayMontageNotifyWindow* UAnimNotify_PlayMontageNotifyWindow::GetDefaultObj()
{
	static class UAnimNotify_PlayMontageNotifyWindow* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_PlayMontageNotifyWindow*>(UAnimNotify_PlayMontageNotifyWindow::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimGraphRuntime.AnimSequencerInstance
// (None)

class UClass* UAnimSequencerInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimSequencerInstance");

	return Clss;
}


// AnimSequencerInstance AnimGraphRuntime.Default__AnimSequencerInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimSequencerInstance* UAnimSequencerInstance::GetDefaultObj()
{
	static class UAnimSequencerInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimSequencerInstance*>(UAnimSequencerInstance::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimGraphRuntime.BlendSpacePlayerLibrary
// (None)

class UClass* UBlendSpacePlayerLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlendSpacePlayerLibrary");

	return Clss;
}


// BlendSpacePlayerLibrary AnimGraphRuntime.Default__BlendSpacePlayerLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlendSpacePlayerLibrary* UBlendSpacePlayerLibrary::GetDefaultObj()
{
	static class UBlendSpacePlayerLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlendSpacePlayerLibrary*>(UBlendSpacePlayerLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SnapToPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     NewPosition                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector UBlendSpacePlayerLibrary::SnapToPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SnapToPosition");

	Params::UBlendSpacePlayerLibrary_SnapToPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::ShouldResetPlayTimeWhenBlendSpaceChanges(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ShouldResetPlayTimeWhenBlendSpaceChanges");

	Params::UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bReset                                                           (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetResetPlayTimeWhenBlendSpaceChanges");

	Params::UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBlendSpacePlayerLibrary::SetPlayRate(const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetPlayRate");

	Params::UBlendSpacePlayerLibrary_SetPlayRate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBlendSpacePlayerLibrary::SetLoop(const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetLoop");

	Params::UBlendSpacePlayerLibrary_SetLoop_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UBlendSpace*                 BlendSpace                                                       (ExportObject, Net, EditFixedSize, OutParm, EditConst, DuplicateTransient)
// float                              BlendTime                                                        (Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, class UBlendSpace** BlendSpace, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetBlendSpaceWithInertialBlending");

	Params::UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendSpace != nullptr)
		*BlendSpace = Parms.BlendSpace;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UBlendSpace*                 BlendSpace                                                       (ExportObject, Net, EditFixedSize, OutParm, EditConst, DuplicateTransient)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetBlendSpace(class UBlendSpace** BlendSpace, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetBlendSpace");

	Params::UBlendSpacePlayerLibrary_SetBlendSpace_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendSpace != nullptr)
		*BlendSpace = Parms.BlendSpace;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::GetStartPosition(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetStartPosition");

	Params::UBlendSpacePlayerLibrary_GetStartPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::GetPosition(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetPosition");

	Params::UBlendSpacePlayerLibrary_GetPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::GetPlayRate(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetPlayRate");

	Params::UBlendSpacePlayerLibrary_GetPlayRate_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::GetLoop(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetLoop");

	Params::UBlendSpacePlayerLibrary_GetLoop_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UBlendSpace*                 ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::GetBlendSpace(class UBlendSpace* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetBlendSpace");

	Params::UBlendSpacePlayerLibrary_GetBlendSpace_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayerPure(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ConvertToBlendSpacePlayerPure");

	Params::UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimNodeReference UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayer(enum class EAnimNodeReferenceConversionResult* Result, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ConvertToBlendSpacePlayer");

	Params::UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Class AnimGraphRuntime.KismetAnimationLibrary
// (None)

class UClass* UKismetAnimationLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KismetAnimationLibrary");

	return Clss;
}


// KismetAnimationLibrary AnimGraphRuntime.Default__KismetAnimationLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UKismetAnimationLibrary* UKismetAnimationLibrary::GetDefaultObj()
{
	static class UKismetAnimationLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UKismetAnimationLibrary*>(UKismetAnimationLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     RootPos                                                          (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     JointPos                                                         (ConstParm, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     EndPos                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     JointTarget                                                      (ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     Effector                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// struct FVector                     OutJointPos                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     OutEndPos                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bAllowStretching                                                 (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              StartStretchRatio                                                (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              MaxStretchScale                                                  (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

float UKismetAnimationLibrary::K2_TwoBoneIK(const struct FVector& RootPos, const struct FVector& JointPos, const struct FVector& OutJointPos, const struct FVector& OutEndPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_TwoBoneIK");

	Params::UKismetAnimationLibrary_K2_TwoBoneIK_Params Parms{};

	Parms.RootPos = RootPos;
	Parms.JointPos = JointPos;
	Parms.OutJointPos = OutJointPos;
	Parms.OutEndPos = OutEndPos;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UKismetAnimationLibrary::K2_StartProfilingTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_StartProfilingTimer");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              X                                                                (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
// float                              Y                                                                (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, Config)
// float                              Z                                                                (Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config)
// float                              RangeOutMinX                                                     (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMaxX                                                     (Edit, ConstParm, BlueprintVisible, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMinY                                                     (Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMaxY                                                     (Edit, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMinZ                                                     (ConstParm, BlueprintReadOnly, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMaxZ                                                     (Edit, ConstParm, ExportObject, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float RangeOutMinX, float RangeOutMaxX, float RangeOutMinY, float RangeOutMaxY, float RangeOutMinZ, float RangeOutMaxZ, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseVectorAndRemap");

	Params::UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;
	Parms.RangeOutMinX = RangeOutMinX;
	Parms.RangeOutMaxX = RangeOutMaxX;
	Parms.RangeOutMinY = RangeOutMinY;
	Parms.RangeOutMaxY = RangeOutMaxY;
	Parms.RangeOutMinZ = RangeOutMinZ;
	Parms.RangeOutMaxZ = RangeOutMaxZ;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// float                              RangeOutMin                                                      (BlueprintVisible, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMax                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float RangeOutMin, float RangeOutMax, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseAndRemap");

	Params::UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params Parms{};

	Parms.Value = Value;
	Parms.RangeOutMin = RangeOutMin;
	Parms.RangeOutMax = RangeOutMax;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  CurrentTransform                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     TargetPosition                                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector                     LookAtVector                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bUseUpVector                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     UpVector                                                         (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              ClampConeInDegree                                                (Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UKismetAnimationLibrary::K2_LookAt(const struct FVector& LookAtVector, bool bUseUpVector, float ClampConeInDegree, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_LookAt");

	Params::UKismetAnimationLibrary_K2_LookAt_Params Parms{};

	Parms.LookAtVector = LookAtVector;
	Parms.bUseUpVector = bUseUpVector;
	Parms.ClampConeInDegree = ClampConeInDegree;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bLog                                                             (ConstParm, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      LogPrefix                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UKismetAnimationLibrary::K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_EndProfilingTimer");

	Params::UKismetAnimationLibrary_K2_EndProfilingTimer_Params Parms{};

	Parms.bLog = bLog;
	Parms.LogPrefix = LogPrefix;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Component                                                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        SocketOrBoneNameA                                                (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ERelativeTransformSpace SocketSpaceA                                                     (Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        SocketOrBoneNameB                                                (Edit, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ERelativeTransformSpace SocketSpaceB                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bRemapRange                                                      (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              InRangeMin                                                       (Edit, Net, OutParm, EditConst, InstancedReference, SubobjectReference)
// float                              InRangeMax                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, EditConst, InstancedReference, SubobjectReference)
// float                              OutRangeMin                                                      (BlueprintVisible, BlueprintReadOnly, OutParm, EditConst, InstancedReference, SubobjectReference)
// float                              OutRangeMax                                                      (Edit, BlueprintVisible, ExportObject, OutParm, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent** Component, class FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, class FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float* InRangeMin, float* InRangeMax, float* OutRangeMin, float* OutRangeMax, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_DistanceBetweenTwoSocketsAndMapRange");

	Params::UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params Parms{};

	Parms.SocketOrBoneNameA = SocketOrBoneNameA;
	Parms.SocketSpaceA = SocketSpaceA;
	Parms.SocketOrBoneNameB = SocketOrBoneNameB;
	Parms.SocketSpaceB = SocketSpaceB;
	Parms.bRemapRange = bRemapRange;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Component != nullptr)
		*Component = Parms.Component;

	if (InRangeMin != nullptr)
		*InRangeMin = Parms.InRangeMin;

	if (InRangeMax != nullptr)
		*InRangeMax = Parms.InRangeMax;

	if (OutRangeMin != nullptr)
		*OutRangeMin = Parms.OutRangeMin;

	if (OutRangeMax != nullptr)
		*OutRangeMax = Parms.OutRangeMax;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Component                                                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        SocketOrBoneNameFrom                                             (ExportObject, Net, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        SocketOrBoneNameTo                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UKismetAnimationLibrary::K2_DirectionBetweenSockets(class USkeletalMeshComponent** Component, class FName SocketOrBoneNameFrom, class FName SocketOrBoneNameTo, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_DirectionBetweenSockets");

	Params::UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params Parms{};

	Parms.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	Parms.SocketOrBoneNameTo = SocketOrBoneNameTo;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Component != nullptr)
		*Component = Parms.Component;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class USkeletalMeshComponent*      Component                                                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        SocketOrBoneName                                                 (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        ReferenceSocketOrBone                                            (Edit, ExportObject, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ERelativeTransformSpace SocketSpace                                                      (ConstParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     OffsetInBoneSpace                                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPositionHistory            History                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              NumberOfSamples                                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VelocityMin                                                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VelocityMax                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EEasingFuncType         EasingType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FRuntimeFloatCurve          CustomCurve                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EEasingFuncType UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(class USkeletalMeshComponent** Component, class FName SocketOrBoneName, class FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, struct FRuntimeFloatCurve* CustomCurve, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromSockets");

	Params::UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params Parms{};

	Parms.SocketOrBoneName = SocketOrBoneName;
	Parms.ReferenceSocketOrBone = ReferenceSocketOrBone;
	Parms.SocketSpace = SocketSpace;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Component != nullptr)
		*Component = Parms.Component;

	if (CustomCurve != nullptr)
		*CustomCurve = std::move(Parms.CustomCurve);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// struct FPositionHistory            History                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              NumberOfSamples                                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VelocityMin                                                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VelocityMax                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(const struct FVector& Position, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromPositionHistory");

	Params::UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params Parms{};

	Parms.Position = Position;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Velocity                                                         (Edit, ReturnParm, Config, EditConst, SubobjectReference)
// struct FRotator                    BaseRotation                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UKismetAnimationLibrary::CalculateDirection(const struct FRotator& BaseRotation, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "CalculateDirection");

	Params::UKismetAnimationLibrary_CalculateDirection_Params Parms{};

	Parms.BaseRotation = BaseRotation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AnimGraphRuntime.LayeredBoneBlendLibrary
// (None)

class UClass* ULayeredBoneBlendLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LayeredBoneBlendLibrary");

	return Clss;
}


// LayeredBoneBlendLibrary AnimGraphRuntime.Default__LayeredBoneBlendLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULayeredBoneBlendLibrary* ULayeredBoneBlendLibrary::GetDefaultObj()
{
	static class ULayeredBoneBlendLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULayeredBoneBlendLibrary*>(ULayeredBoneBlendLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.SetBlendMask
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              PoseIndex                                                        (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        BlendMaskName                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLayeredBoneBlendReference  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ULayeredBoneBlendLibrary::SetBlendMask(const struct FAnimUpdateContext& UpdateContext, const struct FLayeredBoneBlendReference& LayeredBoneBlend, int32 PoseIndex, class FName BlendMaskName, const struct FLayeredBoneBlendReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "SetBlendMask");

	Params::ULayeredBoneBlendLibrary_SetBlendMask_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.LayeredBoneBlend = LayeredBoneBlend;
	Parms.PoseIndex = PoseIndex;
	Parms.BlendMaskName = BlendMaskName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void ULayeredBoneBlendLibrary::GetNumPoses(const struct FLayeredBoneBlendReference& LayeredBoneBlend, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "GetNumPoses");

	Params::ULayeredBoneBlendLibrary_GetNumPoses_Params Parms{};

	Parms.LayeredBoneBlend = LayeredBoneBlend;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FLayeredBoneBlendReference  ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimNodeReference ULayeredBoneBlendLibrary::ConvertToLayeredBoneBlend(enum class EAnimNodeReferenceConversionResult* Result, const struct FLayeredBoneBlendReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "ConvertToLayeredBoneBlend");

	Params::ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference ULayeredBoneBlendLibrary::ConvertToLayeredBlendPerBonePure(const struct FLayeredBoneBlendReference& LayeredBoneBlend, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "ConvertToLayeredBlendPerBonePure");

	Params::ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Params Parms{};

	Parms.LayeredBoneBlend = LayeredBoneBlend;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Class AnimGraphRuntime.LinkedAnimGraphLibrary
// (None)

class UClass* ULinkedAnimGraphLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LinkedAnimGraphLibrary");

	return Clss;
}


// LinkedAnimGraphLibrary AnimGraphRuntime.Default__LinkedAnimGraphLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULinkedAnimGraphLibrary* ULinkedAnimGraphLibrary::GetDefaultObj()
{
	static class ULinkedAnimGraphLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULinkedAnimGraphLibrary*>(ULinkedAnimGraphLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.HasLinkedAnimInstance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkedAnimGraphReference   Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinkedAnimGraphReference ULinkedAnimGraphLibrary::HasLinkedAnimInstance(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "HasLinkedAnimInstance");

	Params::ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkedAnimGraphReference   Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// class UAnimInstance*               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinkedAnimGraphReference ULinkedAnimGraphLibrary::GetLinkedAnimInstance(class UAnimInstance* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "GetLinkedAnimInstance");

	Params::ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FLinkedAnimGraphReference   LinkedAnimGraph                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraphPure(const struct FLinkedAnimGraphReference& LinkedAnimGraph, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "ConvertToLinkedAnimGraphPure");

	Params::ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params Parms{};

	Parms.LinkedAnimGraph = LinkedAnimGraph;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FLinkedAnimGraphReference   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimNodeReference ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraph(enum class EAnimNodeReferenceConversionResult* Result, const struct FLinkedAnimGraphReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "ConvertToLinkedAnimGraph");

	Params::ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// (None)

class UClass* UPlayMontageCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayMontageCallbackProxy");

	return Clss;
}


// PlayMontageCallbackProxy AnimGraphRuntime.Default__PlayMontageCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::GetDefaultObj()
{
	static class UPlayMontageCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayMontageCallbackProxy*>(UPlayMontageCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst)

class FName UPlayMontageCallbackProxy::OnNotifyEndReceived(struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyEndReceived");

	Params::UPlayMontageCallbackProxy_OnNotifyEndReceived_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BranchingPointNotifyPayload != nullptr)
		*BranchingPointNotifyPayload = std::move(Parms.BranchingPointNotifyPayload);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst)

class FName UPlayMontageCallbackProxy::OnNotifyBeginReceived(struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyBeginReceived");

	Params::UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BranchingPointNotifyPayload != nullptr)
		*BranchingPointNotifyPayload = std::move(Parms.BranchingPointNotifyPayload);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bInterrupted                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UPlayMontageCallbackProxy::OnMontageEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageEnded");

	Params::UPlayMontageCallbackProxy_OnMontageEnded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bInterrupted                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UPlayMontageCallbackProxy::OnMontageBlendingOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageBlendingOut");

	Params::UPlayMontageCallbackProxy_OnMontageBlendingOut_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      InSkeletalMeshComponent                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UAnimMontage*                MontageToPlay                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// float                              StartingPosition                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        StartingSection                                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UPlayMontageCallbackProxy*   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage** MontageToPlay, float StartingPosition, class FName StartingSection, class UPlayMontageCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "CreateProxyObjectForPlayMontage");

	Params::UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params Parms{};

	Parms.InSkeletalMeshComponent = InSkeletalMeshComponent;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MontageToPlay != nullptr)
		*MontageToPlay = Parms.MontageToPlay;

	return Parms.ReturnValue;

}


// Class AnimGraphRuntime.SequenceEvaluatorLibrary
// (None)

class UClass* USequenceEvaluatorLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequenceEvaluatorLibrary");

	return Clss;
}


// SequenceEvaluatorLibrary AnimGraphRuntime.Default__SequenceEvaluatorLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USequenceEvaluatorLibrary* USequenceEvaluatorLibrary::GetDefaultObj()
{
	static class USequenceEvaluatorLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USequenceEvaluatorLibrary*>(USequenceEvaluatorLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequenceWithInertialBlending
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              BlendTime                                                        (Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USequenceEvaluatorLibrary::SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase** Sequence, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetSequenceWithInertialBlending");

	Params::USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USequenceEvaluatorLibrary::SetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase** Sequence, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetSequence");

	Params::USequenceEvaluatorLibrary_SetSequence_Params Parms{};

	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// float                              Time                                                             (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USequenceEvaluatorLibrary::SetExplicitTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetExplicitTime");

	Params::USequenceEvaluatorLibrary_SetExplicitTime_Params Parms{};

	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USequenceEvaluatorLibrary::GetSequence(const struct FSequenceEvaluatorReference& SequenceEvaluator, class UAnimSequenceBase* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "GetSequence");

	Params::USequenceEvaluatorLibrary_GetSequence_Params Parms{};

	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USequenceEvaluatorLibrary::GetAccumulatedTime(const struct FSequenceEvaluatorReference& SequenceEvaluator, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "GetAccumulatedTime");

	Params::USequenceEvaluatorLibrary_GetAccumulatedTime_Params Parms{};

	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference USequenceEvaluatorLibrary::ConvertToSequenceEvaluatorPure(const struct FSequenceEvaluatorReference& SequenceEvaluator, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "ConvertToSequenceEvaluatorPure");

	Params::USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params Parms{};

	Parms.SequenceEvaluator = SequenceEvaluator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimNodeReference USequenceEvaluatorLibrary::ConvertToSequenceEvaluator(enum class EAnimNodeReferenceConversionResult* Result, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "ConvertToSequenceEvaluator");

	Params::USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USequenceEvaluatorLibrary::AdvanceTime(const struct FAnimUpdateContext& UpdateContext, const struct FSequenceEvaluatorReference& SequenceEvaluator, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "AdvanceTime");

	Params::USequenceEvaluatorLibrary_AdvanceTime_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.SequenceEvaluator = SequenceEvaluator;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AnimGraphRuntime.SequencePlayerLibrary
// (None)

class UClass* USequencePlayerLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequencePlayerLibrary");

	return Clss;
}


// SequencePlayerLibrary AnimGraphRuntime.Default__SequencePlayerLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USequencePlayerLibrary* USequencePlayerLibrary::GetDefaultObj()
{
	static class USequencePlayerLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USequencePlayerLibrary*>(USequencePlayerLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetStartPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// float                              StartPosition                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USequencePlayerLibrary::SetStartPosition(const struct FSequencePlayerReference& SequencePlayer, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetStartPosition");

	Params::USequencePlayerLibrary_SetStartPosition_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              BlendTime                                                        (Edit, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USequencePlayerLibrary::SetSequenceWithInertialBlending(const struct FAnimUpdateContext& UpdateContext, const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase** Sequence, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetSequenceWithInertialBlending");

	Params::USequencePlayerLibrary_SetSequenceWithInertialBlending_Params Parms{};

	Parms.UpdateContext = UpdateContext;
	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (BlueprintVisible, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USequencePlayerLibrary::SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase** Sequence, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetSequence");

	Params::USequencePlayerLibrary_SetSequence_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USequencePlayerLibrary::SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetPlayRate");

	Params::USequencePlayerLibrary_SetPlayRate_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// float                              Time                                                             (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USequencePlayerLibrary::SetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetAccumulatedTime");

	Params::USequencePlayerLibrary_SetAccumulatedTime_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USequencePlayerLibrary::GetStartPosition(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetStartPosition");

	Params::USequencePlayerLibrary_GetStartPosition_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USequencePlayerLibrary::GetSequencePure(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetSequencePure");

	Params::USequencePlayerLibrary_GetSequencePure_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           SequenceBase                                                     (ConstParm, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USequencePlayerLibrary::GetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase** SequenceBase, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetSequence");

	Params::USequencePlayerLibrary_GetSequence_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequenceBase != nullptr)
		*SequenceBase = Parms.SequenceBase;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USequencePlayerLibrary::GetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetPlayRate");

	Params::USequencePlayerLibrary_GetPlayRate_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USequencePlayerLibrary::GetLoopAnimation(const struct FSequencePlayerReference& SequencePlayer, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetLoopAnimation");

	Params::USequencePlayerLibrary_GetLoopAnimation_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USequencePlayerLibrary::GetAccumulatedTime(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetAccumulatedTime");

	Params::USequencePlayerLibrary_GetAccumulatedTime_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference USequencePlayerLibrary::ConvertToSequencePlayerPure(const struct FSequencePlayerReference& SequencePlayer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ConvertToSequencePlayerPure");

	Params::USequencePlayerLibrary_ConvertToSequencePlayerPure_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimNodeReference USequencePlayerLibrary::ConvertToSequencePlayer(enum class EAnimNodeReferenceConversionResult* Result, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ConvertToSequencePlayer");

	Params::USequencePlayerLibrary_ConvertToSequencePlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, InstancedReference, SubobjectReference)
// float                              Duration                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, DuplicateTransient)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USequencePlayerLibrary::ComputePlayRateFromDuration(const struct FSequencePlayerReference& SequencePlayer, float Duration, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ComputePlayRateFromDuration");

	Params::USequencePlayerLibrary_ComputePlayRateFromDuration_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.Duration = Duration;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class AnimGraphRuntime.SequencerAnimationSupport
// (None)

class UClass* ISequencerAnimationSupport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SequencerAnimationSupport");

	return Clss;
}


// SequencerAnimationSupport AnimGraphRuntime.Default__SequencerAnimationSupport
// (Public, ClassDefaultObject, ArchetypeObject)

class ISequencerAnimationSupport* ISequencerAnimationSupport::GetDefaultObj()
{
	static class ISequencerAnimationSupport* Default = nullptr;

	if (!Default)
		Default = static_cast<ISequencerAnimationSupport*>(ISequencerAnimationSupport::StaticClass()->DefaultObject);

	return Default;
}


// Class AnimGraphRuntime.SkeletalControlLibrary
// (None)

class UClass* USkeletalControlLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkeletalControlLibrary");

	return Clss;
}


// SkeletalControlLibrary AnimGraphRuntime.Default__SkeletalControlLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USkeletalControlLibrary* USkeletalControlLibrary::GetDefaultObj()
{
	static class USkeletalControlLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USkeletalControlLibrary*>(USkeletalControlLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimGraphRuntime.SkeletalControlLibrary.SetAlpha
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSkeletalControlReference   SkeletalControl                                                  (Edit, ExportObject, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Alpha                                                            (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSkeletalControlReference   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USkeletalControlLibrary::SetAlpha(struct FSkeletalControlReference* SkeletalControl, float* Alpha, const struct FSkeletalControlReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "SetAlpha");

	Params::USkeletalControlLibrary_SetAlpha_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SkeletalControl != nullptr)
		*SkeletalControl = std::move(Parms.SkeletalControl);

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;

}


// Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSkeletalControlReference   SkeletalControl                                                  (Edit, ExportObject, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void USkeletalControlLibrary::GetAlpha(struct FSkeletalControlReference* SkeletalControl, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "GetAlpha");

	Params::USkeletalControlLibrary_GetAlpha_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SkeletalControl != nullptr)
		*SkeletalControl = std::move(Parms.SkeletalControl);

}


// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FSkeletalControlReference   SkeletalControl                                                  (Edit, ExportObject, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference USkeletalControlLibrary::ConvertToSkeletalControlPure(struct FSkeletalControlReference* SkeletalControl, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "ConvertToSkeletalControlPure");

	Params::USkeletalControlLibrary_ConvertToSkeletalControlPure_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SkeletalControl != nullptr)
		*SkeletalControl = std::move(Parms.SkeletalControl);

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FSkeletalControlReference   ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimNodeReference USkeletalControlLibrary::ConvertToSkeletalControl(enum class EAnimNodeReferenceConversionResult* Result, const struct FSkeletalControlReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "ConvertToSkeletalControl");

	Params::USkeletalControlLibrary_ConvertToSkeletalControl_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}

}


