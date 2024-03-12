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
// struct FBlendSpaceReference        BlendSpace                                                       (Edit, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
// struct FVector                     NewPosition                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

struct FVector UBlendSpaceLibrary::SnapToPosition(const struct FBlendSpaceReference& BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "SnapToPosition");

	Params::UBlendSpaceLibrary_SnapToPosition_Params Parms{};

	Parms.BlendSpace = BlendSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpaceReference        BlendSpace                                                       (Edit, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UBlendSpaceLibrary::GetPosition(const struct FBlendSpaceReference& BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "GetPosition");

	Params::UBlendSpaceLibrary_GetPosition_Params Parms{};

	Parms.BlendSpace = BlendSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpaceReference        BlendSpace                                                       (Edit, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UBlendSpaceLibrary::GetFilteredPosition(const struct FBlendSpaceReference& BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "GetFilteredPosition");

	Params::UBlendSpaceLibrary_GetFilteredPosition_Params Parms{};

	Parms.BlendSpace = BlendSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FBlendSpaceReference        BlendSpace                                                       (Edit, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)

struct FAnimNodeReference UBlendSpaceLibrary::ConvertToBlendSpacePure(const struct FBlendSpaceReference& BlendSpace, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "ConvertToBlendSpacePure");

	Params::UBlendSpaceLibrary_ConvertToBlendSpacePure_Params Parms{};

	Parms.BlendSpace = BlendSpace;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FBlendSpaceReference        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlendSpaceReference UBlendSpaceLibrary::ConvertToBlendSpace(enum class EAnimNodeReferenceConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "ConvertToBlendSpace");

	Params::UBlendSpaceLibrary_ConvertToBlendSpace_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnimationStateMachineReferenceNode                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// class FName                        TargetState                                                      (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Duration                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
// enum class ETransitionLogicType    BlendType                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UBlendProfile*               BlendProfile                                                     (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
// enum class EAlphaBlendOption       AlphaBlendOption                                                 (BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class UCurveFloat*                 CustomBlendCurve                                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)

class UBlendProfile* UAnimationStateMachineLibrary::SetState(class FName TargetState, enum class EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "SetState");

	Params::UAnimationStateMachineLibrary_SetState_Params Parms{};

	Parms.TargetState = TargetState;
	Parms.AlphaBlendOption = AlphaBlendOption;
	Parms.CustomBlendCurve = CustomBlendCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingOut
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UAnimationStateMachineLibrary::IsStateBlendingOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "IsStateBlendingOut");

	Params::UAnimationStateMachineLibrary_IsStateBlendingOut_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.IsStateBlendingIn
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UAnimationStateMachineLibrary::IsStateBlendingIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "IsStateBlendingIn");

	Params::UAnimationStateMachineLibrary_IsStateBlendingIn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnimationStateMachineReferenceNode                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// class FName                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UAnimationStateMachineLibrary::GetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "GetState");

	Params::UAnimationStateMachineLibrary_GetState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemainingFraction
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "GetRelevantAnimTimeRemainingFraction");

	Params::UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.GetRelevantAnimTimeRemaining
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "GetRelevantAnimTimeRemaining");

	Params::UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResultPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FAnimationStateResultReferenceAnimationState                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst)
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)

struct FAnimNodeReference UAnimationStateMachineLibrary::ConvertToAnimationStateResultPure(struct FAnimationStateResultReference* AnimationState, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateResultPure");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnimationState != nullptr)
		*AnimationState = std::move(Parms.AnimationState);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FAnimationStateResultReferenceAnimationState                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)

struct FAnimNodeReference UAnimationStateMachineLibrary::ConvertToAnimationStateResult(struct FAnimationStateResultReference* AnimationState, enum class EAnimNodeReferenceConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateResult");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnimationState != nullptr)
		*AnimationState = std::move(Parms.AnimationState);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FAnimationStateMachineReferenceAnimationState                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst)
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)

struct FAnimNodeReference UAnimationStateMachineLibrary::ConvertToAnimationStateMachinePure(struct FAnimationStateMachineReference* AnimationState, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateMachinePure");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnimationState != nullptr)
		*AnimationState = std::move(Parms.AnimationState);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FAnimationStateMachineReferenceAnimationState                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)

struct FAnimNodeReference UAnimationStateMachineLibrary::ConvertToAnimationStateMachine(struct FAnimationStateMachineReference* AnimationState, enum class EAnimNodeReferenceConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateMachine");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnimationState != nullptr)
		*AnimationState = std::move(Parms.AnimationState);

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
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UAnimExecutionContextLibrary::GetDeltaTime(struct FAnimUpdateContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetDeltaTime");

	Params::UAnimExecutionContextLibrary_GetDeltaTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UAnimExecutionContextLibrary::GetCurrentWeight(struct FAnimUpdateContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetCurrentWeight");

	Params::UAnimExecutionContextLibrary_GetCurrentWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimInstance*               Instance                                                         (BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// struct FAnimNodeReference          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAnimNodeReference UAnimExecutionContextLibrary::GetAnimNodeReference(class UAnimInstance* Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetAnimNodeReference");

	Params::UAnimExecutionContextLibrary_GetAnimNodeReference_Params Parms{};

	Parms.Instance = Instance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UAnimInstance*               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UAnimInstance* UAnimExecutionContextLibrary::GetAnimInstance(struct FAnimExecutionContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetAnimInstance");

	Params::UAnimExecutionContextLibrary_GetAnimInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FAnimUpdateContext          ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAnimUpdateContext UAnimExecutionContextLibrary::ConvertToUpdateContext(struct FAnimExecutionContext* Context, enum class EAnimExecutionContextConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToUpdateContext");

	Params::UAnimExecutionContextLibrary_ConvertToUpdateContext_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FAnimPoseContext            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAnimPoseContext UAnimExecutionContextLibrary::ConvertToPoseContext(struct FAnimExecutionContext* Context, enum class EAnimExecutionContextConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToPoseContext");

	Params::UAnimExecutionContextLibrary_ConvertToPoseContext_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FAnimInitializationContext  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAnimInitializationContext UAnimExecutionContextLibrary::ConvertToInitializationContext(struct FAnimExecutionContext* Context, enum class EAnimExecutionContextConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToInitializationContext");

	Params::UAnimExecutionContextLibrary_ConvertToInitializationContext_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FAnimComponentSpacePoseContextReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAnimComponentSpacePoseContext UAnimExecutionContextLibrary::ConvertToComponentSpacePoseContext(struct FAnimExecutionContext* Context, enum class EAnimExecutionContextConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToComponentSpacePoseContext");

	Params::UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

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
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     NewPosition                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

struct FVector UBlendSpacePlayerLibrary::SnapToPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SnapToPosition");

	Params::UBlendSpacePlayerLibrary_SnapToPosition_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UBlendSpacePlayerLibrary::ShouldResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ShouldResetPlayTimeWhenBlendSpaceChanges");

	Params::UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bReset                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetResetPlayTimeWhenBlendSpaceChanges");

	Params::UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetPlayRate");

	Params::UBlendSpacePlayerLibrary_SetPlayRate_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetLoop");

	Params::UBlendSpacePlayerLibrary_SetLoop_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class UBlendSpace*                 BlendSpace                                                       (Edit, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
// float                              BlendTime                                                        (Edit, EditFixedSize, OutParm, EditConst, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace, float* BlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetBlendSpaceWithInertialBlending");

	Params::UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.BlendSpace = BlendSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendTime != nullptr)
		*BlendTime = Parms.BlendTime;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class UBlendSpace*                 BlendSpace                                                       (Edit, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetBlendSpace");

	Params::UBlendSpacePlayerLibrary_SetBlendSpace_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.BlendSpace = BlendSpace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UBlendSpacePlayerLibrary::GetStartPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetStartPosition");

	Params::UBlendSpacePlayerLibrary_GetStartPosition_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UBlendSpacePlayerLibrary::GetPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetPosition");

	Params::UBlendSpacePlayerLibrary_GetPosition_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UBlendSpacePlayerLibrary::GetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetPlayRate");

	Params::UBlendSpacePlayerLibrary_GetPlayRate_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UBlendSpacePlayerLibrary::GetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetLoop");

	Params::UBlendSpacePlayerLibrary_GetLoop_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class UBlendSpace*                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UBlendSpace* UBlendSpacePlayerLibrary::GetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetBlendSpace");

	Params::UBlendSpacePlayerLibrary_GetBlendSpace_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)

struct FAnimNodeReference UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayerPure(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ConvertToBlendSpacePlayerPure");

	Params::UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayer(enum class EAnimNodeReferenceConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ConvertToBlendSpacePlayer");

	Params::UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FVector                     RootPos                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     JointPos                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     EndPos                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     JointTarget                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Effector                                                         (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     OutJointPos                                                      (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     OutEndPos                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bAllowStretching                                                 (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              StartStretchRatio                                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              MaxStretchScale                                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UKismetAnimationLibrary::K2_TwoBoneIK(struct FVector* RootPos, struct FVector* JointPos, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_TwoBoneIK");

	Params::UKismetAnimationLibrary_K2_TwoBoneIK_Params Parms{};

	Parms.Effector = Effector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RootPos != nullptr)
		*RootPos = std::move(Parms.RootPos);

	if (JointPos != nullptr)
		*JointPos = std::move(Parms.JointPos);

	if (OutJointPos != nullptr)
		*OutJointPos = std::move(Parms.OutJointPos);

	if (OutEndPos != nullptr)
		*OutEndPos = std::move(Parms.OutEndPos);

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
// float                              X                                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
// float                              Y                                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
// float                              Z                                                                (Edit, EditFixedSize, ReturnParm, Transient, Config)
// float                              RangeOutMinX                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMaxX                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMinY                                                     (ExportObject, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMaxY                                                     (Edit, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMinZ                                                     (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMaxZ                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float* RangeOutMinX, float* RangeOutMaxX, float* RangeOutMinY, float* RangeOutMaxY, float* RangeOutMinZ, float* RangeOutMaxZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseVectorAndRemap");

	Params::UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RangeOutMinX != nullptr)
		*RangeOutMinX = Parms.RangeOutMinX;

	if (RangeOutMaxX != nullptr)
		*RangeOutMaxX = Parms.RangeOutMaxX;

	if (RangeOutMinY != nullptr)
		*RangeOutMinY = Parms.RangeOutMinY;

	if (RangeOutMaxY != nullptr)
		*RangeOutMaxY = Parms.RangeOutMaxY;

	if (RangeOutMinZ != nullptr)
		*RangeOutMinZ = Parms.RangeOutMinZ;

	if (RangeOutMaxZ != nullptr)
		*RangeOutMaxZ = Parms.RangeOutMaxZ;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
// float                              RangeOutMin                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMax                                                      (Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float* Value, float* RangeOutMin, float* RangeOutMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseAndRemap");

	Params::UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

	if (RangeOutMin != nullptr)
		*RangeOutMin = Parms.RangeOutMin;

	if (RangeOutMax != nullptr)
		*RangeOutMax = Parms.RangeOutMax;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  CurrentTransform                                                 (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     TargetPosition                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// struct FVector                     LookAtVector                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bUseUpVector                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     UpVector                                                         (Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              ClampConeInDegree                                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FTransform UKismetAnimationLibrary::K2_LookAt(const struct FVector& LookAtVector, bool bUseUpVector, float ClampConeInDegree)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_LookAt");

	Params::UKismetAnimationLibrary_K2_LookAt_Params Parms{};

	Parms.LookAtVector = LookAtVector;
	Parms.bUseUpVector = bUseUpVector;
	Parms.ClampConeInDegree = ClampConeInDegree;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bLog                                                             (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      LogPrefix                                                        (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UKismetAnimationLibrary::K2_EndProfilingTimer(bool bLog, const class FString& LogPrefix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_EndProfilingTimer");

	Params::UKismetAnimationLibrary_K2_EndProfilingTimer_Params Parms{};

	Parms.bLog = bLog;
	Parms.LogPrefix = LogPrefix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Component                                                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FName                        SocketOrBoneNameA                                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ERelativeTransformSpace SocketSpaceA                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        SocketOrBoneNameB                                                (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ERelativeTransformSpace SocketSpaceB                                                     (ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bRemapRange                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              InRangeMin                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InRangeMax                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              OutRangeMin                                                      (ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              OutRangeMax                                                      (Edit, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(class FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, class FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float* InRangeMin, float* InRangeMax, float* OutRangeMin, float* OutRangeMax)
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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InRangeMin != nullptr)
		*InRangeMin = Parms.InRangeMin;

	if (InRangeMax != nullptr)
		*InRangeMax = Parms.InRangeMax;

	if (OutRangeMin != nullptr)
		*OutRangeMin = Parms.OutRangeMin;

	if (OutRangeMax != nullptr)
		*OutRangeMax = Parms.OutRangeMax;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Component                                                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FName                        SocketOrBoneNameFrom                                             (BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        SocketOrBoneNameTo                                               (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector UKismetAnimationLibrary::K2_DirectionBetweenSockets(class FName SocketOrBoneNameFrom, class FName SocketOrBoneNameTo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_DirectionBetweenSockets");

	Params::UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params Parms{};

	Parms.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	Parms.SocketOrBoneNameTo = SocketOrBoneNameTo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class USkeletalMeshComponent*      Component                                                        (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FName                        SocketOrBoneName                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        ReferenceSocketOrBone                                            (Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ERelativeTransformSpace SocketSpace                                                      (ConstParm, ExportObject, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     OffsetInBoneSpace                                                (Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPositionHistory            History                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              NumberOfSamples                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VelocityMin                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VelocityMax                                                      (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EEasingFuncType         EasingType                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FRuntimeFloatCurve          CustomCurve                                                      (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(float* DeltaSeconds, class FName SocketOrBoneName, class FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, const struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromSockets");

	Params::UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params Parms{};

	Parms.SocketOrBoneName = SocketOrBoneName;
	Parms.ReferenceSocketOrBone = ReferenceSocketOrBone;
	Parms.SocketSpace = SocketSpace;
	Parms.OffsetInBoneSpace = OffsetInBoneSpace;
	Parms.History = History;
	Parms.NumberOfSamples = NumberOfSamples;
	Parms.VelocityMin = VelocityMin;
	Parms.VelocityMax = VelocityMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DeltaSeconds != nullptr)
		*DeltaSeconds = Parms.DeltaSeconds;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
// struct FPositionHistory            History                                                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              NumberOfSamples                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VelocityMin                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VelocityMax                                                      (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(float* DeltaSeconds, const struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromPositionHistory");

	Params::UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params Parms{};

	Parms.History = History;
	Parms.NumberOfSamples = NumberOfSamples;
	Parms.VelocityMin = VelocityMin;
	Parms.VelocityMax = VelocityMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DeltaSeconds != nullptr)
		*DeltaSeconds = Parms.DeltaSeconds;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Velocity                                                         (Config, EditConst, GlobalConfig)
// struct FRotator                    BaseRotation                                                     (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UKismetAnimationLibrary::CalculateDirection(const struct FVector& Velocity, struct FRotator* BaseRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "CalculateDirection");

	Params::UKismetAnimationLibrary_CalculateDirection_Params Parms{};

	Parms.Velocity = Velocity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BaseRotation != nullptr)
		*BaseRotation = std::move(Parms.BaseRotation);

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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              PoseIndex                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class FName                        BlendMaskName                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLayeredBoneBlendReference  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLayeredBoneBlendReference ULayeredBoneBlendLibrary::SetBlendMask(struct FLayeredBoneBlendReference* LayeredBoneBlend, int32 PoseIndex, class FName* BlendMaskName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "SetBlendMask");

	Params::ULayeredBoneBlendLibrary_SetBlendMask_Params Parms{};

	Parms.PoseIndex = PoseIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LayeredBoneBlend != nullptr)
		*LayeredBoneBlend = std::move(Parms.LayeredBoneBlend);

	if (BlendMaskName != nullptr)
		*BlendMaskName = Parms.BlendMaskName;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.GetNumPoses
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 ULayeredBoneBlendLibrary::GetNumPoses(struct FLayeredBoneBlendReference* LayeredBoneBlend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "GetNumPoses");

	Params::ULayeredBoneBlendLibrary_GetNumPoses_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LayeredBoneBlend != nullptr)
		*LayeredBoneBlend = std::move(Parms.LayeredBoneBlend);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FLayeredBoneBlendReference  ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLayeredBoneBlendReference ULayeredBoneBlendLibrary::ConvertToLayeredBoneBlend(enum class EAnimNodeReferenceConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "ConvertToLayeredBoneBlend");

	Params::ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)

struct FAnimNodeReference ULayeredBoneBlendLibrary::ConvertToLayeredBlendPerBonePure(struct FLayeredBoneBlendReference* LayeredBoneBlend, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "ConvertToLayeredBlendPerBonePure");

	Params::ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LayeredBoneBlend != nullptr)
		*LayeredBoneBlend = std::move(Parms.LayeredBoneBlend);

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
// struct FLinkedAnimGraphReference   Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool ULinkedAnimGraphLibrary::HasLinkedAnimInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "HasLinkedAnimInstance");

	Params::ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkedAnimGraphReference   Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// class UAnimInstance*               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UAnimInstance* ULinkedAnimGraphLibrary::GetLinkedAnimInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "GetLinkedAnimInstance");

	Params::ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FLinkedAnimGraphReference   LinkedAnimGraph                                                  (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)

struct FAnimNodeReference ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraphPure(struct FLinkedAnimGraphReference* LinkedAnimGraph, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "ConvertToLinkedAnimGraphPure");

	Params::ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LinkedAnimGraph != nullptr)
		*LinkedAnimGraph = std::move(Parms.LinkedAnimGraph);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FLinkedAnimGraphReference   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FLinkedAnimGraphReference ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraph(enum class EAnimNodeReferenceConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "ConvertToLinkedAnimGraph");

	Params::ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class FName                        NotifyName                                                       (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst)

void UPlayMontageCallbackProxy::OnNotifyEndReceived(class FName* NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyEndReceived");

	Params::UPlayMontageCallbackProxy_OnNotifyEndReceived_Params Parms{};

	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NotifyName != nullptr)
		*NotifyName = Parms.NotifyName;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (BlueprintVisible, Net, Parm, ZeroConstructor, Transient, EditConst)

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(class FName* NotifyName, const struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyBeginReceived");

	Params::UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params Parms{};

	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NotifyName != nullptr)
		*NotifyName = Parms.NotifyName;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               bInterrupted                                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage** Montage, bool* bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageEnded");

	Params::UPlayMontageCallbackProxy_OnMontageEnded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Montage != nullptr)
		*Montage = Parms.Montage;

	if (bInterrupted != nullptr)
		*bInterrupted = Parms.bInterrupted;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               bInterrupted                                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage** Montage, bool* bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageBlendingOut");

	Params::UPlayMontageCallbackProxy_OnMontageBlendingOut_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Montage != nullptr)
		*Montage = Parms.Montage;

	if (bInterrupted != nullptr)
		*bInterrupted = Parms.bInterrupted;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      InSkeletalMeshComponent                                          (Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class UAnimMontage*                MontageToPlay                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              StartingPosition                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        StartingSection                                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class UPlayMontageCallbackProxy*   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent** InSkeletalMeshComponent, class UAnimMontage** MontageToPlay, float PlayRate, float* StartingPosition, class FName* StartingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "CreateProxyObjectForPlayMontage");

	Params::UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params Parms{};

	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSkeletalMeshComponent != nullptr)
		*InSkeletalMeshComponent = Parms.InSkeletalMeshComponent;

	if (MontageToPlay != nullptr)
		*MontageToPlay = Parms.MontageToPlay;

	if (StartingPosition != nullptr)
		*StartingPosition = Parms.StartingPosition;

	if (StartingSection != nullptr)
		*StartingSection = Parms.StartingSection;

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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              BlendTime                                                        (Edit, EditFixedSize, OutParm, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetSequenceWithInertialBlending(class UAnimSequenceBase** Sequence, float* BlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetSequenceWithInertialBlending");

	Params::USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (BlendTime != nullptr)
		*BlendTime = Parms.BlendTime;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetSequence(class UAnimSequenceBase** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetSequence");

	Params::USequenceEvaluatorLibrary_SetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Time                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetExplicitTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetExplicitTime");

	Params::USequenceEvaluatorLibrary_SetExplicitTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UAnimSequenceBase* USequenceEvaluatorLibrary::GetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "GetSequence");

	Params::USequenceEvaluatorLibrary_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USequenceEvaluatorLibrary::GetAccumulatedTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "GetAccumulatedTime");

	Params::USequenceEvaluatorLibrary_GetAccumulatedTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::ConvertToSequenceEvaluatorPure(bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "ConvertToSequenceEvaluatorPure");

	Params::USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::ConvertToSequenceEvaluator(enum class EAnimNodeReferenceConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "ConvertToSequenceEvaluator");

	Params::USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::AdvanceTime(float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "AdvanceTime");

	Params::USequenceEvaluatorLibrary_AdvanceTime_Params Parms{};

	Parms.PlayRate = PlayRate;

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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// float                              StartPosition                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::SetStartPosition(struct FSequencePlayerReference* SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetStartPosition");

	Params::USequencePlayerLibrary_SetStartPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              BlendTime                                                        (Edit, EditFixedSize, OutParm, EditConst, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::SetSequenceWithInertialBlending(struct FSequencePlayerReference* SequencePlayer, class UAnimSequenceBase** Sequence, float* BlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetSequenceWithInertialBlending");

	Params::USequencePlayerLibrary_SetSequenceWithInertialBlending_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	if (BlendTime != nullptr)
		*BlendTime = Parms.BlendTime;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::SetSequence(struct FSequencePlayerReference* SequencePlayer, class UAnimSequenceBase** Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetSequence");

	Params::USequencePlayerLibrary_SetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	if (Sequence != nullptr)
		*Sequence = Parms.Sequence;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::SetPlayRate(struct FSequencePlayerReference* SequencePlayer, float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetPlayRate");

	Params::USequencePlayerLibrary_SetPlayRate_Params Parms{};

	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// float                              Time                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::SetAccumulatedTime(struct FSequencePlayerReference* SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetAccumulatedTime");

	Params::USequencePlayerLibrary_SetAccumulatedTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USequencePlayerLibrary::GetStartPosition(struct FSequencePlayerReference* SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetStartPosition");

	Params::USequencePlayerLibrary_GetStartPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UAnimSequenceBase* USequencePlayerLibrary::GetSequencePure(struct FSequencePlayerReference* SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetSequencePure");

	Params::USequencePlayerLibrary_GetSequencePure_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           SequenceBase                                                     (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::GetSequence(struct FSequencePlayerReference* SequencePlayer, class UAnimSequenceBase** SequenceBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetSequence");

	Params::USequencePlayerLibrary_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	if (SequenceBase != nullptr)
		*SequenceBase = Parms.SequenceBase;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USequencePlayerLibrary::GetPlayRate(struct FSequencePlayerReference* SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetPlayRate");

	Params::USequencePlayerLibrary_GetPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool USequencePlayerLibrary::GetLoopAnimation(struct FSequencePlayerReference* SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetLoopAnimation");

	Params::USequencePlayerLibrary_GetLoopAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USequencePlayerLibrary::GetAccumulatedTime(struct FSequencePlayerReference* SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetAccumulatedTime");

	Params::USequencePlayerLibrary_GetAccumulatedTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)

struct FAnimNodeReference USequencePlayerLibrary::ConvertToSequencePlayerPure(struct FSequencePlayerReference* SequencePlayer, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ConvertToSequencePlayerPure");

	Params::USequencePlayerLibrary_ConvertToSequencePlayerPure_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::ConvertToSequencePlayer(enum class EAnimNodeReferenceConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ConvertToSequencePlayer");

	Params::USequencePlayerLibrary_ConvertToSequencePlayer_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, OutParm, InstancedReference, SubobjectReference)
// float                              Duration                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USequencePlayerLibrary::ComputePlayRateFromDuration(struct FSequencePlayerReference* SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ComputePlayRateFromDuration");

	Params::USequencePlayerLibrary_ComputePlayRateFromDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequencePlayer != nullptr)
		*SequencePlayer = std::move(Parms.SequencePlayer);

	return Parms.ReturnValue;

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
// struct FSkeletalControlReference   SkeletalControl                                                  (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Alpha                                                            (Edit, BlueprintVisible, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FSkeletalControlReference   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSkeletalControlReference USkeletalControlLibrary::SetAlpha(struct FSkeletalControlReference* SkeletalControl, float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "SetAlpha");

	Params::USkeletalControlLibrary_SetAlpha_Params Parms{};

	Parms.Alpha = Alpha;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SkeletalControl != nullptr)
		*SkeletalControl = std::move(Parms.SkeletalControl);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSkeletalControlReference   SkeletalControl                                                  (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USkeletalControlLibrary::GetAlpha(struct FSkeletalControlReference* SkeletalControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "GetAlpha");

	Params::USkeletalControlLibrary_GetAlpha_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SkeletalControl != nullptr)
		*SkeletalControl = std::move(Parms.SkeletalControl);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControlPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FSkeletalControlReference   SkeletalControl                                                  (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)

struct FAnimNodeReference USkeletalControlLibrary::ConvertToSkeletalControlPure(struct FSkeletalControlReference* SkeletalControl, bool Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "ConvertToSkeletalControlPure");

	Params::USkeletalControlLibrary_ConvertToSkeletalControlPure_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SkeletalControl != nullptr)
		*SkeletalControl = std::move(Parms.SkeletalControl);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SkeletalControlLibrary.ConvertToSkeletalControl
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// struct FSkeletalControlReference   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSkeletalControlReference USkeletalControlLibrary::ConvertToSkeletalControl(enum class EAnimNodeReferenceConversionResult Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "ConvertToSkeletalControl");

	Params::USkeletalControlLibrary_ConvertToSkeletalControl_Params Parms{};

	Parms.Result = Result;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


