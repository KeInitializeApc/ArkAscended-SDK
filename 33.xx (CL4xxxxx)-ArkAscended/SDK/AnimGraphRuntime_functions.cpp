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
// struct FBlendSpaceReference        BlendSpace                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
// struct FVector                     NewPosition                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBlendSpaceLibrary::SnapToPosition(struct FBlendSpaceReference* BlendSpace, const struct FVector& NewPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "SnapToPosition");

	Params::UBlendSpaceLibrary_SnapToPosition_Params Parms{};

	Parms.NewPosition = NewPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendSpace != nullptr)
		*BlendSpace = std::move(Parms.BlendSpace);

}


// Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpaceReference        BlendSpace                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UBlendSpaceLibrary::GetPosition(struct FBlendSpaceReference* BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "GetPosition");

	Params::UBlendSpaceLibrary_GetPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendSpace != nullptr)
		*BlendSpace = std::move(Parms.BlendSpace);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpaceReference        BlendSpace                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UBlendSpaceLibrary::GetFilteredPosition(struct FBlendSpaceReference* BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "GetFilteredPosition");

	Params::UBlendSpaceLibrary_GetFilteredPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendSpace != nullptr)
		*BlendSpace = std::move(Parms.BlendSpace);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FBlendSpaceReference        BlendSpace                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
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
// struct FBlendSpaceReference        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpaceReference UBlendSpaceLibrary::ConvertToBlendSpace(enum class EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "ConvertToBlendSpace");

	Params::UBlendSpaceLibrary_ConvertToBlendSpace_Params Parms{};


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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FAnimationStateMachineReferenceNode                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// class FName                        TargetState                                                      (Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Duration                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
// enum class ETransitionLogicType    BlendType                                                        (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UBlendProfile*               BlendProfile                                                     (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig)
// enum class EAlphaBlendOption       AlphaBlendOption                                                 (ConstParm, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UCurveFloat*                 CustomBlendCurve                                                 (Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UBlendProfile* UAnimationStateMachineLibrary::SetState(class FName TargetState, enum class ETransitionLogicType BlendType, enum class EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "SetState");

	Params::UAnimationStateMachineLibrary_SetState_Params Parms{};

	Parms.TargetState = TargetState;
	Parms.BlendType = BlendType;
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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FAnimationStateMachineReferenceNode                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FAnimUpdateContext          Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UAnimExecutionContextLibrary::GetDeltaTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetDeltaTime");

	Params::UAnimExecutionContextLibrary_GetDeltaTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UAnimExecutionContextLibrary::GetCurrentWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetCurrentWeight");

	Params::UAnimExecutionContextLibrary_GetCurrentWeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimInstance*               Instance                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FAnimNodeReference          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimNodeReference UAnimExecutionContextLibrary::GetAnimNodeReference(class UAnimInstance** Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetAnimNodeReference");

	Params::UAnimExecutionContextLibrary_GetAnimNodeReference_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Instance != nullptr)
		*Instance = Parms.Instance;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UAnimInstance*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UAnimInstance* UAnimExecutionContextLibrary::GetAnimInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "GetAnimInstance");

	Params::UAnimExecutionContextLibrary_GetAnimInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FAnimUpdateContext          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimUpdateContext UAnimExecutionContextLibrary::ConvertToUpdateContext(enum class EAnimExecutionContextConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToUpdateContext");

	Params::UAnimExecutionContextLibrary_ConvertToUpdateContext_Params Parms{};


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
// struct FAnimExecutionContext       Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FAnimPoseContext            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimPoseContext UAnimExecutionContextLibrary::ConvertToPoseContext(enum class EAnimExecutionContextConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToPoseContext");

	Params::UAnimExecutionContextLibrary_ConvertToPoseContext_Params Parms{};


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
// struct FAnimExecutionContext       Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FAnimInitializationContext  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimInitializationContext UAnimExecutionContextLibrary::ConvertToInitializationContext(enum class EAnimExecutionContextConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToInitializationContext");

	Params::UAnimExecutionContextLibrary_ConvertToInitializationContext_Params Parms{};


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
// struct FAnimExecutionContext       Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FAnimComponentSpacePoseContextReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnimComponentSpacePoseContext UAnimExecutionContextLibrary::ConvertToComponentSpacePoseContext(enum class EAnimExecutionContextConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimExecutionContextLibrary", "ConvertToComponentSpacePoseContext");

	Params::UAnimExecutionContextLibrary_ConvertToComponentSpacePoseContext_Params Parms{};


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
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     NewPosition                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBlendSpacePlayerLibrary::SnapToPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FVector& NewPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SnapToPosition");

	Params::UBlendSpacePlayerLibrary_SnapToPosition_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.NewPosition = NewPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ShouldResetPlayTimeWhenBlendSpaceChanges
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bReset                                                           (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool* bReset)
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

	if (bReset != nullptr)
		*bReset = Parms.bReset;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetLoop");

	Params::UBlendSpacePlayerLibrary_SetLoop_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.bLoop = bLoop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpaceWithInertialBlending
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UBlendSpace*                 BlendSpace                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
// float                              BlendTime                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace** BlendSpace, float* BlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetBlendSpaceWithInertialBlending");

	Params::UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendSpace != nullptr)
		*BlendSpace = Parms.BlendSpace;

	if (BlendTime != nullptr)
		*BlendTime = Parms.BlendTime;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UBlendSpace*                 BlendSpace                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, GlobalConfig)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace** BlendSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetBlendSpace");

	Params::UBlendSpacePlayerLibrary_SetBlendSpace_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

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
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UBlendSpace*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayerPure(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ConvertToBlendSpacePlayerPure");

	Params::UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;

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
// struct FBlendSpacePlayerReference  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FBlendSpacePlayerReference UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayer(enum class EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ConvertToBlendSpacePlayer");

	Params::UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Params Parms{};


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
// struct FVector                     RootPos                                                          (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     JointPos                                                         (Edit, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     EndPos                                                           (Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     JointTarget                                                      (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FVector                     Effector                                                         (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// struct FVector                     OutJointPos                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     OutEndPos                                                        (BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bAllowStretching                                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              StartStretchRatio                                                (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              MaxStretchScale                                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

void UKismetAnimationLibrary::K2_TwoBoneIK(struct FVector* RootPos, struct FVector* JointPos, const struct FVector& EndPos, const struct FVector& JointTarget, const struct FVector& Effector, struct FVector* OutJointPos, struct FVector* OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_TwoBoneIK");

	Params::UKismetAnimationLibrary_K2_TwoBoneIK_Params Parms{};

	Parms.EndPos = EndPos;
	Parms.JointTarget = JointTarget;
	Parms.Effector = Effector;
	Parms.bAllowStretching = bAllowStretching;
	Parms.StartStretchRatio = StartStretchRatio;
	Parms.MaxStretchScale = MaxStretchScale;

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
// float                              RangeOutMinX                                                     (Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMaxX                                                     (ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMinY                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMaxY                                                     (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMinZ                                                     (Edit, BlueprintReadOnly, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMaxZ                                                     (ConstParm, ExportObject, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float X, float Y, float Z, float* RangeOutMinX, float* RangeOutMaxX, float* RangeOutMinY, float* RangeOutMaxY, float* RangeOutMinZ, float* RangeOutMaxZ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseVectorAndRemap");

	Params::UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.Z = Z;

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
// float                              Value                                                            (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config)
// float                              RangeOutMin                                                      (Edit, ConstParm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              RangeOutMax                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float Value, float* RangeOutMin, float RangeOutMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseAndRemap");

	Params::UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params Parms{};

	Parms.Value = Value;
	Parms.RangeOutMax = RangeOutMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RangeOutMin != nullptr)
		*RangeOutMin = Parms.RangeOutMin;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  CurrentTransform                                                 (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FVector                     TargetPosition                                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// struct FVector                     LookAtVector                                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bUseUpVector                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     UpVector                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// float                              ClampConeInDegree                                                (BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTransform UKismetAnimationLibrary::K2_LookAt(struct FTransform* CurrentTransform, const struct FVector& LookAtVector, bool bUseUpVector, struct FVector* UpVector, float ClampConeInDegree)
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

	if (CurrentTransform != nullptr)
		*CurrentTransform = std::move(Parms.CurrentTransform);

	if (UpVector != nullptr)
		*UpVector = std::move(Parms.UpVector);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bLog                                                             (Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      LogPrefix                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class USkeletalMeshComponent*      Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        SocketOrBoneNameA                                                (Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ERelativeTransformSpace SocketSpaceA                                                     (ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        SocketOrBoneNameB                                                (EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ERelativeTransformSpace SocketSpaceB                                                     (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bRemapRange                                                      (ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              InRangeMin                                                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              InRangeMax                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              OutRangeMin                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              OutRangeMax                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(class FName SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, class FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange)
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

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        SocketOrBoneNameFrom                                             (Edit, ConstParm, BlueprintVisible, Net, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        SocketOrBoneNameTo                                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              DeltaSeconds                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class USkeletalMeshComponent*      Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        SocketOrBoneName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        ReferenceSocketOrBone                                            (ExportObject, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ERelativeTransformSpace SocketSpace                                                      (Edit, Parm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     OffsetInBoneSpace                                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FPositionHistory            History                                                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              NumberOfSamples                                                  (Edit, ExportObject, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VelocityMin                                                      (ConstParm, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VelocityMax                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EEasingFuncType         EasingType                                                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, InstancedReference, SubobjectReference)
// struct FRuntimeFloatCurve          CustomCurve                                                      (Edit, ConstParm, ExportObject, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(float DeltaSeconds, class FName SocketOrBoneName, class FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, const struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax, enum class EEasingFuncType EasingType, const struct FRuntimeFloatCurve& CustomCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromSockets");

	Params::UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.SocketOrBoneName = SocketOrBoneName;
	Parms.ReferenceSocketOrBone = ReferenceSocketOrBone;
	Parms.SocketSpace = SocketSpace;
	Parms.OffsetInBoneSpace = OffsetInBoneSpace;
	Parms.History = History;
	Parms.NumberOfSamples = NumberOfSamples;
	Parms.VelocityMin = VelocityMin;
	Parms.VelocityMax = VelocityMax;
	Parms.EasingType = EasingType;
	Parms.CustomCurve = CustomCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// struct FPositionHistory            History                                                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              NumberOfSamples                                                  (Edit, ExportObject, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VelocityMin                                                      (ConstParm, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              VelocityMax                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(float DeltaSeconds, const struct FVector& Position, const struct FPositionHistory& History, int32 NumberOfSamples, float VelocityMin, float VelocityMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromPositionHistory");

	Params::UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.Position = Position;
	Parms.History = History;
	Parms.NumberOfSamples = NumberOfSamples;
	Parms.VelocityMin = VelocityMin;
	Parms.VelocityMax = VelocityMax;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Velocity                                                         (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig)
// struct FRotator                    BaseRotation                                                     (BlueprintVisible, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UKismetAnimationLibrary::CalculateDirection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "CalculateDirection");

	Params::UKismetAnimationLibrary_CalculateDirection_Params Parms{};


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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              PoseIndex                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        BlendMaskName                                                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLayeredBoneBlendReference  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLayeredBoneBlendReference ULayeredBoneBlendLibrary::SetBlendMask(struct FLayeredBoneBlendReference* LayeredBoneBlend, class FName* BlendMaskName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "SetBlendMask");

	Params::ULayeredBoneBlendLibrary_SetBlendMask_Params Parms{};


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
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FLayeredBoneBlendReference  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLayeredBoneBlendReference ULayeredBoneBlendLibrary::ConvertToLayeredBoneBlend(enum class EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "ConvertToLayeredBoneBlend");

	Params::ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Params Parms{};


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
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference ULayeredBoneBlendLibrary::ConvertToLayeredBlendPerBonePure(struct FLayeredBoneBlendReference* LayeredBoneBlend, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "ConvertToLayeredBlendPerBonePure");

	Params::ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LayeredBoneBlend != nullptr)
		*LayeredBoneBlend = std::move(Parms.LayeredBoneBlend);

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
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FLinkedAnimGraphReference   Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// class UAnimInstance*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FLinkedAnimGraphReference   LinkedAnimGraph                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FAnimNodeReference ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraphPure(struct FLinkedAnimGraphReference* LinkedAnimGraph, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "ConvertToLinkedAnimGraphPure");

	Params::ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LinkedAnimGraph != nullptr)
		*LinkedAnimGraph = std::move(Parms.LinkedAnimGraph);

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraph
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FLinkedAnimGraphReference   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinkedAnimGraphReference ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraph(enum class EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "ConvertToLinkedAnimGraph");

	Params::ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params Parms{};


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
// class FName                        NotifyName                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst)

void UPlayMontageCallbackProxy::OnNotifyEndReceived(class FName NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyEndReceived");

	Params::UPlayMontageCallbackProxy_OnNotifyEndReceived_Params Parms{};

	Parms.NotifyName = NotifyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BranchingPointNotifyPayload != nullptr)
		*BranchingPointNotifyPayload = std::move(Parms.BranchingPointNotifyPayload);

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst)

void UPlayMontageCallbackProxy::OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload* BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnNotifyBeginReceived");

	Params::UPlayMontageCallbackProxy_OnNotifyBeginReceived_Params Parms{};

	Parms.NotifyName = NotifyName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BranchingPointNotifyPayload != nullptr)
		*BranchingPointNotifyPayload = std::move(Parms.BranchingPointNotifyPayload);

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bInterrupted                                                     (BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPlayMontageCallbackProxy::OnMontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageEnded");

	Params::UPlayMontageCallbackProxy_OnMontageEnded_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bInterrupted                                                     (BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UPlayMontageCallbackProxy::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "OnMontageBlendingOut");

	Params::UPlayMontageCallbackProxy_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      InSkeletalMeshComponent                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UAnimMontage*                MontageToPlay                                                    (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              StartingPosition                                                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        StartingSection                                                  (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UPlayMontageCallbackProxy*   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UPlayMontageCallbackProxy* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent** InSkeletalMeshComponent, float PlayRate, float* StartingPosition, class FName* StartingSection)
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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              BlendTime                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetSequenceWithInertialBlending(float* BlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetSequenceWithInertialBlending");

	Params::USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendTime != nullptr)
		*BlendTime = Parms.BlendTime;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetSequence");

	Params::USequenceEvaluatorLibrary_SetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              Time                                                             (Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetExplicitTime(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetExplicitTime");

	Params::USequenceEvaluatorLibrary_SetExplicitTime_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::ConvertToSequenceEvaluatorPure(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "ConvertToSequenceEvaluatorPure");

	Params::USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params Parms{};


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
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::ConvertToSequenceEvaluator(enum class EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "ConvertToSequenceEvaluator");

	Params::USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params Parms{};


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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              StartPosition                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::SetStartPosition(float* StartPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetStartPosition");

	Params::USequencePlayerLibrary_SetStartPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (StartPosition != nullptr)
		*StartPosition = Parms.StartPosition;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequenceWithInertialBlending
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              BlendTime                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::SetSequenceWithInertialBlending(float* BlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetSequenceWithInertialBlending");

	Params::USequencePlayerLibrary_SetSequenceWithInertialBlending_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (BlendTime != nullptr)
		*BlendTime = Parms.BlendTime;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::SetSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetSequence");

	Params::USequencePlayerLibrary_SetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::SetPlayRate(float PlayRate)
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

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              Time                                                             (Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::SetAccumulatedTime(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetAccumulatedTime");

	Params::USequencePlayerLibrary_SetAccumulatedTime_Params Parms{};

	Parms.Time = Time;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetStartPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USequencePlayerLibrary::GetStartPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetStartPosition");

	Params::USequencePlayerLibrary_GetStartPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequencePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UAnimSequenceBase* USequencePlayerLibrary::GetSequencePure()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetSequencePure");

	Params::USequencePlayerLibrary_GetSequencePure_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           SequenceBase                                                     (Edit, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::GetSequence(class UAnimSequenceBase** SequenceBase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetSequence");

	Params::USequencePlayerLibrary_GetSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SequenceBase != nullptr)
		*SequenceBase = Parms.SequenceBase;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USequencePlayerLibrary::GetPlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetPlayRate");

	Params::USequencePlayerLibrary_GetPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetLoopAnimation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool USequencePlayerLibrary::GetLoopAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetLoopAnimation");

	Params::USequencePlayerLibrary_GetLoopAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.GetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USequencePlayerLibrary::GetAccumulatedTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "GetAccumulatedTime");

	Params::USequencePlayerLibrary_GetAccumulatedTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayerPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)

struct FSequencePlayerReference USequencePlayerLibrary::ConvertToSequencePlayerPure(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ConvertToSequencePlayerPure");

	Params::USequencePlayerLibrary_ConvertToSequencePlayerPure_Params Parms{};


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
// struct FSequencePlayerReference    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSequencePlayerReference USequencePlayerLibrary::ConvertToSequencePlayer(enum class EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ConvertToSequencePlayer");

	Params::USequencePlayerLibrary_ConvertToSequencePlayer_Params Parms{};


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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              Duration                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USequencePlayerLibrary::ComputePlayRateFromDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ComputePlayRateFromDuration");

	Params::USequencePlayerLibrary_ComputePlayRateFromDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSkeletalControlReference   SkeletalControl                                                  (ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Alpha                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSkeletalControlReference   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FSkeletalControlReference   SkeletalControl                                                  (ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FSkeletalControlReference   SkeletalControl                                                  (ExportObject, Net, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
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
// struct FSkeletalControlReference   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSkeletalControlReference USkeletalControlLibrary::ConvertToSkeletalControl(enum class EAnimNodeReferenceConversionResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "ConvertToSkeletalControl");

	Params::USkeletalControlLibrary_ConvertToSkeletalControl_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}

}


