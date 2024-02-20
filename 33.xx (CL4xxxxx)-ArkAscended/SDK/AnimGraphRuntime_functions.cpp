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
// struct FBlendSpaceReference        BlendSpace                                                       (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
// struct FVector                     NewPosition                                                      (ExportObject, EditFixedSize, Config, InstancedReference, SubobjectReference)

struct FBlendSpaceReference UBlendSpaceLibrary::SnapToPosition(const struct FVector& NewPosition)
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

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.GetPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpaceReference        BlendSpace                                                       (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlendSpaceReference UBlendSpaceLibrary::GetPosition(const struct FVector& ReturnValue)
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

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.GetFilteredPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpaceReference        BlendSpace                                                       (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FBlendSpaceReference UBlendSpaceLibrary::GetFilteredPosition(const struct FVector& ReturnValue)
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

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpacePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FBlendSpaceReference        BlendSpace                                                       (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

bool UBlendSpaceLibrary::ConvertToBlendSpacePure(const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "ConvertToBlendSpacePure");

	Params::UBlendSpaceLibrary_ConvertToBlendSpacePure_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpaceLibrary.ConvertToBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FBlendSpaceReference        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EAnimNodeReferenceConversionResult UBlendSpaceLibrary::ConvertToBlendSpace(const struct FAnimNodeReference& Node, const struct FBlendSpaceReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpaceLibrary", "ConvertToBlendSpace");

	Params::UBlendSpaceLibrary_ConvertToBlendSpace_Params Parms{};

	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FAnimationStateMachineReferenceNode                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// class FName                        TargetState                                                      (Edit, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Duration                                                         (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
// enum class ETransitionLogicType    BlendType                                                        (BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UBlendProfile*               BlendProfile                                                     (BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// enum class EAlphaBlendOption       AlphaBlendOption                                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UCurveFloat*                 CustomBlendCurve                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float UAnimationStateMachineLibrary::SetState(const struct FAnimationStateMachineReference& Node, class FName TargetState, enum class ETransitionLogicType BlendType, class UBlendProfile* BlendProfile, enum class EAlphaBlendOption AlphaBlendOption, class UCurveFloat* CustomBlendCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "SetState");

	Params::UAnimationStateMachineLibrary_SetState_Params Parms{};

	Parms.Node = Node;
	Parms.TargetState = TargetState;
	Parms.BlendType = BlendType;
	Parms.BlendProfile = BlendProfile;
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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAnimUpdateContext UAnimationStateMachineLibrary::IsStateBlendingOut(const struct FAnimationStateResultReference& Node, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "IsStateBlendingOut");

	Params::UAnimationStateMachineLibrary_IsStateBlendingOut_Params Parms{};

	Parms.Node = Node;
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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAnimUpdateContext UAnimationStateMachineLibrary::IsStateBlendingIn(const struct FAnimationStateResultReference& Node, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "IsStateBlendingIn");

	Params::UAnimationStateMachineLibrary_IsStateBlendingIn_Params Parms{};

	Parms.Node = Node;
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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FAnimationStateMachineReferenceNode                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAnimUpdateContext UAnimationStateMachineLibrary::GetState(const struct FAnimationStateMachineReference& Node, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "GetState");

	Params::UAnimationStateMachineLibrary_GetState_Params Parms{};

	Parms.Node = Node;
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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAnimUpdateContext UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction(const struct FAnimationStateResultReference& Node, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "GetRelevantAnimTimeRemainingFraction");

	Params::UAnimationStateMachineLibrary_GetRelevantAnimTimeRemainingFraction_Params Parms{};

	Parms.Node = Node;
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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FAnimationStateResultReferenceNode                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAnimUpdateContext UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining(const struct FAnimationStateResultReference& Node, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "GetRelevantAnimTimeRemaining");

	Params::UAnimationStateMachineLibrary_GetRelevantAnimTimeRemaining_Params Parms{};

	Parms.Node = Node;
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
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FAnimationStateResultReferenceAnimationState                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

bool UAnimationStateMachineLibrary::ConvertToAnimationStateResultPure(const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateResultPure");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateResultPure_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateResult
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FAnimationStateResultReferenceAnimationState                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

enum class EAnimNodeReferenceConversionResult UAnimationStateMachineLibrary::ConvertToAnimationStateResult(const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateResult");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateResult_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachinePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FAnimationStateMachineReferenceAnimationState                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

bool UAnimationStateMachineLibrary::ConvertToAnimationStateMachinePure(const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateMachinePure");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateMachinePure_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimationStateMachineLibrary.ConvertToAnimationStateMachine
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FAnimationStateMachineReferenceAnimationState                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

enum class EAnimNodeReferenceConversionResult UAnimationStateMachineLibrary::ConvertToAnimationStateMachine(const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationStateMachineLibrary", "ConvertToAnimationStateMachine");

	Params::UAnimationStateMachineLibrary_ConvertToAnimationStateMachine_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAnimExecutionContextLibrary::GetDeltaTime(struct FAnimUpdateContext* Context, float ReturnValue)
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

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetCurrentWeight
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAnimExecutionContextLibrary::GetCurrentWeight(struct FAnimUpdateContext* Context, float ReturnValue)
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

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimNodeReference
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimInstance*               Instance                                                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// struct FAnimNodeReference          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAnimExecutionContextLibrary::GetAnimNodeReference(class UAnimInstance** Instance, int32* Index, const struct FAnimNodeReference& ReturnValue)
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

	if (Instance != nullptr)
		*Instance = Parms.Instance;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.GetAnimInstance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UAnimInstance*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UAnimExecutionContextLibrary::GetAnimInstance(struct FAnimExecutionContext* Context, class UAnimInstance* ReturnValue)
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

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToUpdateContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FAnimUpdateContext          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EAnimExecutionContextConversionResult UAnimExecutionContextLibrary::ConvertToUpdateContext(struct FAnimExecutionContext* Context, const struct FAnimUpdateContext& ReturnValue)
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

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToPoseContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FAnimPoseContext            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EAnimExecutionContextConversionResult UAnimExecutionContextLibrary::ConvertToPoseContext(struct FAnimExecutionContext* Context, const struct FAnimPoseContext& ReturnValue)
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

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToInitializationContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FAnimInitializationContext  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EAnimExecutionContextConversionResult UAnimExecutionContextLibrary::ConvertToInitializationContext(struct FAnimExecutionContext* Context, const struct FAnimInitializationContext& ReturnValue)
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

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.AnimExecutionContextLibrary.ConvertToComponentSpacePoseContext
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimExecutionContext       Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// enum class EAnimExecutionContextConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FAnimComponentSpacePoseContextReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EAnimExecutionContextConversionResult UAnimExecutionContextLibrary::ConvertToComponentSpacePoseContext(struct FAnimExecutionContext* Context, const struct FAnimComponentSpacePoseContext& ReturnValue)
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
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     NewPosition                                                      (ExportObject, EditFixedSize, Config, InstancedReference, SubobjectReference)

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
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UBlendSpacePlayerLibrary::ShouldResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ShouldResetPlayTimeWhenBlendSpaceChanges");

	Params::UBlendSpacePlayerLibrary_ShouldResetPlayTimeWhenBlendSpaceChanges_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetResetPlayTimeWhenBlendSpaceChanges
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bReset                                                           (BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetResetPlayTimeWhenBlendSpaceChanges");

	Params::UBlendSpacePlayerLibrary_SetResetPlayTimeWhenBlendSpaceChanges_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
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
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UBlendSpacePlayerLibrary::SetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float* PlayRate, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetPlayRate");

	Params::UBlendSpacePlayerLibrary_SetPlayRate_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayRate != nullptr)
		*PlayRate = Parms.PlayRate;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetLoop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bLoop                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UBlendSpacePlayerLibrary::SetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetLoop");

	Params::UBlendSpacePlayerLibrary_SetLoop_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UBlendSpace*                 BlendSpace                                                       (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
// float                              BlendTime                                                        (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UBlendSpace* UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float BlendTime, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetBlendSpaceWithInertialBlending");

	Params::UBlendSpacePlayerLibrary_SetBlendSpaceWithInertialBlending_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.BlendTime = BlendTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.SetBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UBlendSpace*                 BlendSpace                                                       (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DuplicateTransient)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UBlendSpace* UBlendSpacePlayerLibrary::SetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "SetBlendSpace");

	Params::UBlendSpacePlayerLibrary_SetBlendSpace_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetStartPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UBlendSpacePlayerLibrary::GetStartPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetStartPosition");

	Params::UBlendSpacePlayerLibrary_GetStartPosition_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UBlendSpacePlayerLibrary::GetPosition(const struct FBlendSpacePlayerReference& BlendSpacePlayer, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetPosition");

	Params::UBlendSpacePlayerLibrary_GetPosition_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UBlendSpacePlayerLibrary::GetPlayRate(const struct FBlendSpacePlayerReference& BlendSpacePlayer, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetPlayRate");

	Params::UBlendSpacePlayerLibrary_GetPlayRate_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetLoop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UBlendSpacePlayerLibrary::GetLoop(const struct FBlendSpacePlayerReference& BlendSpacePlayer, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetLoop");

	Params::UBlendSpacePlayerLibrary_GetLoop_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.GetBlendSpace
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UBlendSpace*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UBlendSpacePlayerLibrary::GetBlendSpace(const struct FBlendSpacePlayerReference& BlendSpacePlayer, class UBlendSpace* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "GetBlendSpace");

	Params::UBlendSpacePlayerLibrary_GetBlendSpace_Params Parms{};

	Parms.BlendSpacePlayer = BlendSpacePlayer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayerPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FBlendSpacePlayerReference  BlendSpacePlayer                                                 (ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

bool UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayerPure(const struct FAnimNodeReference& Node, const struct FBlendSpacePlayerReference& BlendSpacePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ConvertToBlendSpacePlayerPure");

	Params::UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayerPure_Params Parms{};

	Parms.Node = Node;
	Parms.BlendSpacePlayer = BlendSpacePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.BlendSpacePlayerLibrary.ConvertToBlendSpacePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FBlendSpacePlayerReference  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EAnimNodeReferenceConversionResult UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayer(const struct FAnimNodeReference& Node, const struct FBlendSpacePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlendSpacePlayerLibrary", "ConvertToBlendSpacePlayer");

	Params::UBlendSpacePlayerLibrary_ConvertToBlendSpacePlayer_Params Parms{};

	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

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
// struct FVector                     RootPos                                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     JointPos                                                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     EndPos                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     JointTarget                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     Effector                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     OutJointPos                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     OutEndPos                                                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bAllowStretching                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              StartStretchRatio                                                (BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              MaxStretchScale                                                  (Edit, ConstParm, BlueprintVisible, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UKismetAnimationLibrary::K2_TwoBoneIK(struct FVector* RootPos, struct FVector* JointPos, const struct FVector& EndPos, struct FVector* OutJointPos, struct FVector* OutEndPos, float StartStretchRatio, float MaxStretchScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_TwoBoneIK");

	Params::UKismetAnimationLibrary_K2_TwoBoneIK_Params Parms{};

	Parms.EndPos = EndPos;
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
// float                              X                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
// float                              Y                                                                (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
// float                              Z                                                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
// float                              RangeOutMinX                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              RangeOutMaxX                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              RangeOutMinY                                                     (BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              RangeOutMaxY                                                     (Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              RangeOutMinZ                                                     (ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              RangeOutMaxZ                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UKismetAnimationLibrary::K2_MakePerlinNoiseVectorAndRemap(float* X, float* Y, float* Z, float* RangeOutMinX, float* RangeOutMaxX, float* RangeOutMinY, float* RangeOutMaxY, float* RangeOutMinZ, float* RangeOutMaxZ, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseVectorAndRemap");

	Params::UKismetAnimationLibrary_K2_MakePerlinNoiseVectorAndRemap_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	if (Z != nullptr)
		*Z = Parms.Z;

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

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config)
// float                              RangeOutMin                                                      (BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              RangeOutMax                                                      (Edit, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UKismetAnimationLibrary::K2_MakePerlinNoiseAndRemap(float* Value, float* RangeOutMin, float* RangeOutMax, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_MakePerlinNoiseAndRemap");

	Params::UKismetAnimationLibrary_K2_MakePerlinNoiseAndRemap_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  CurrentTransform                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     TargetPosition                                                   (ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// struct FVector                     LookAtVector                                                     (ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bUseUpVector                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     UpVector                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// float                              ClampConeInDegree                                                (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UKismetAnimationLibrary::K2_LookAt(const struct FTransform& CurrentTransform, struct FVector* TargetPosition, struct FVector* LookAtVector, bool* bUseUpVector, const struct FVector& UpVector, float* ClampConeInDegree, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_LookAt");

	Params::UKismetAnimationLibrary_K2_LookAt_Params Parms{};

	Parms.CurrentTransform = CurrentTransform;
	Parms.UpVector = UpVector;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TargetPosition != nullptr)
		*TargetPosition = std::move(Parms.TargetPosition);

	if (LookAtVector != nullptr)
		*LookAtVector = std::move(Parms.LookAtVector);

	if (bUseUpVector != nullptr)
		*bUseUpVector = Parms.bUseUpVector;

	if (ClampConeInDegree != nullptr)
		*ClampConeInDegree = Parms.ClampConeInDegree;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bLog                                                             (ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      LogPrefix                                                        (BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UKismetAnimationLibrary::K2_EndProfilingTimer(bool* bLog, class FString* LogPrefix, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_EndProfilingTimer");

	Params::UKismetAnimationLibrary_K2_EndProfilingTimer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bLog != nullptr)
		*bLog = Parms.bLog;

	if (LogPrefix != nullptr)
		*LogPrefix = std::move(Parms.LogPrefix);

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FName                        SocketOrBoneNameA                                                (ConstParm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ERelativeTransformSpace SocketSpaceA                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        SocketOrBoneNameB                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ERelativeTransformSpace SocketSpaceB                                                     (ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bRemapRange                                                      (Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              InRangeMin                                                       (Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              InRangeMax                                                       (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              OutRangeMin                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              OutRangeMax                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UKismetAnimationLibrary::K2_DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent* Component, class FName* SocketOrBoneNameA, enum class ERelativeTransformSpace SocketSpaceA, class FName SocketOrBoneNameB, enum class ERelativeTransformSpace SocketSpaceB, bool bRemapRange, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_DistanceBetweenTwoSocketsAndMapRange");

	Params::UKismetAnimationLibrary_K2_DistanceBetweenTwoSocketsAndMapRange_Params Parms{};

	Parms.Component = Component;
	Parms.SocketSpaceA = SocketSpaceA;
	Parms.SocketOrBoneNameB = SocketOrBoneNameB;
	Parms.SocketSpaceB = SocketSpaceB;
	Parms.bRemapRange = bRemapRange;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SocketOrBoneNameA != nullptr)
		*SocketOrBoneNameA = Parms.SocketOrBoneNameA;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FName                        SocketOrBoneNameFrom                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        SocketOrBoneNameTo                                               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UKismetAnimationLibrary::K2_DirectionBetweenSockets(class USkeletalMeshComponent* Component, class FName SocketOrBoneNameFrom, class FName SocketOrBoneNameTo, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_DirectionBetweenSockets");

	Params::UKismetAnimationLibrary_K2_DirectionBetweenSockets_Params Parms{};

	Parms.Component = Component;
	Parms.SocketOrBoneNameFrom = SocketOrBoneNameFrom;
	Parms.SocketOrBoneNameTo = SocketOrBoneNameTo;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class USkeletalMeshComponent*      Component                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FName                        SocketOrBoneName                                                 (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        ReferenceSocketOrBone                                            (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class ERelativeTransformSpace SocketSpace                                                      (ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     OffsetInBoneSpace                                                (ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FPositionHistory            History                                                          (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              NumberOfSamples                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              VelocityMin                                                      (ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              VelocityMax                                                      (Edit, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EEasingFuncType         EasingType                                                       (BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FRuntimeFloatCurve          CustomCurve                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EEasingFuncType UKismetAnimationLibrary::K2_CalculateVelocityFromSockets(class USkeletalMeshComponent* Component, class FName SocketOrBoneName, class FName ReferenceSocketOrBone, enum class ERelativeTransformSpace SocketSpace, const struct FVector& OffsetInBoneSpace, int32 NumberOfSamples, float VelocityMin, float VelocityMax, const struct FRuntimeFloatCurve& CustomCurve, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromSockets");

	Params::UKismetAnimationLibrary_K2_CalculateVelocityFromSockets_Params Parms{};

	Parms.Component = Component;
	Parms.SocketOrBoneName = SocketOrBoneName;
	Parms.ReferenceSocketOrBone = ReferenceSocketOrBone;
	Parms.SocketSpace = SocketSpace;
	Parms.OffsetInBoneSpace = OffsetInBoneSpace;
	Parms.NumberOfSamples = NumberOfSamples;
	Parms.VelocityMin = VelocityMin;
	Parms.VelocityMax = VelocityMax;
	Parms.CustomCurve = CustomCurve;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FPositionHistory            History                                                          (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              NumberOfSamples                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              VelocityMin                                                      (ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              VelocityMax                                                      (Edit, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPositionHistory UKismetAnimationLibrary::K2_CalculateVelocityFromPositionHistory(struct FVector* Position, int32 NumberOfSamples, float VelocityMin, float VelocityMax, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "K2_CalculateVelocityFromPositionHistory");

	Params::UKismetAnimationLibrary_K2_CalculateVelocityFromPositionHistory_Params Parms{};

	Parms.NumberOfSamples = NumberOfSamples;
	Parms.VelocityMin = VelocityMin;
	Parms.VelocityMax = VelocityMax;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Velocity                                                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FRotator                    BaseRotation                                                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FRotator UKismetAnimationLibrary::CalculateDirection(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KismetAnimationLibrary", "CalculateDirection");

	Params::UKismetAnimationLibrary_CalculateDirection_Params Parms{};

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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              PoseIndex                                                        (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FName                        BlendMaskName                                                    (Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FLayeredBoneBlendReference  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAnimUpdateContext ULayeredBoneBlendLibrary::SetBlendMask(struct FLayeredBoneBlendReference* LayeredBoneBlend, int32 PoseIndex, class FName* BlendMaskName, const struct FLayeredBoneBlendReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "SetBlendMask");

	Params::ULayeredBoneBlendLibrary_SetBlendMask_Params Parms{};

	Parms.PoseIndex = PoseIndex;
	Parms.ReturnValue = ReturnValue;

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
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULayeredBoneBlendLibrary::GetNumPoses(struct FLayeredBoneBlendReference* LayeredBoneBlend, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "GetNumPoses");

	Params::ULayeredBoneBlendLibrary_GetNumPoses_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LayeredBoneBlend != nullptr)
		*LayeredBoneBlend = std::move(Parms.LayeredBoneBlend);

}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBoneBlend
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FLayeredBoneBlendReference  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EAnimNodeReferenceConversionResult ULayeredBoneBlendLibrary::ConvertToLayeredBoneBlend(const struct FAnimNodeReference& Node, const struct FLayeredBoneBlendReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "ConvertToLayeredBoneBlend");

	Params::ULayeredBoneBlendLibrary_ConvertToLayeredBoneBlend_Params Parms{};

	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.LayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FLayeredBoneBlendReference  LayeredBoneBlend                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

bool ULayeredBoneBlendLibrary::ConvertToLayeredBlendPerBonePure(const struct FAnimNodeReference& Node, struct FLayeredBoneBlendReference* LayeredBoneBlend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LayeredBoneBlendLibrary", "ConvertToLayeredBlendPerBonePure");

	Params::ULayeredBoneBlendLibrary_ConvertToLayeredBlendPerBonePure_Params Parms{};

	Parms.Node = Node;

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
// struct FLinkedAnimGraphReference   Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULinkedAnimGraphLibrary::HasLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "HasLinkedAnimInstance");

	Params::ULinkedAnimGraphLibrary_HasLinkedAnimInstance_Params Parms{};

	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.GetLinkedAnimInstance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkedAnimGraphReference   Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// class UAnimInstance*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ULinkedAnimGraphLibrary::GetLinkedAnimInstance(const struct FLinkedAnimGraphReference& Node, class UAnimInstance* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "GetLinkedAnimInstance");

	Params::ULinkedAnimGraphLibrary_GetLinkedAnimInstance_Params Parms{};

	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.LinkedAnimGraphLibrary.ConvertToLinkedAnimGraphPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FLinkedAnimGraphReference   LinkedAnimGraph                                                  (Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

bool ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraphPure(const struct FAnimNodeReference& Node, struct FLinkedAnimGraphReference* LinkedAnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "ConvertToLinkedAnimGraphPure");

	Params::ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraphPure_Params Parms{};

	Parms.Node = Node;

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
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FLinkedAnimGraphReference   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EAnimNodeReferenceConversionResult ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraph(const struct FAnimNodeReference& Node, const struct FLinkedAnimGraphReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LinkedAnimGraphLibrary", "ConvertToLinkedAnimGraph");

	Params::ULinkedAnimGraphLibrary_ConvertToLinkedAnimGraph_Params Parms{};

	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

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
// class FName                        NotifyName                                                       (Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)

struct FBranchingPointNotifyPayload UPlayMontageCallbackProxy::OnNotifyEndReceived(class FName NotifyName)
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

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)

struct FBranchingPointNotifyPayload UPlayMontageCallbackProxy::OnNotifyBeginReceived(class FName NotifyName)
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

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
// (Final, Native, Protected)
// Parameters:
// class UAnimMontage*                Montage                                                          (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// bool                               bInterrupted                                                     (Edit, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)

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
// class UAnimMontage*                Montage                                                          (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// bool                               bInterrupted                                                     (Edit, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)

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
// class USkeletalMeshComponent*      InSkeletalMeshComponent                                          (ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UAnimMontage*                MontageToPlay                                                    (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              StartingPosition                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FName                        StartingSection                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPlayMontageCallbackProxy*   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UAnimMontage* UPlayMontageCallbackProxy::CreateProxyObjectForPlayMontage(class USkeletalMeshComponent** InSkeletalMeshComponent, float* PlayRate, float* StartingPosition, class FName* StartingSection, class UPlayMontageCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayMontageCallbackProxy", "CreateProxyObjectForPlayMontage");

	Params::UPlayMontageCallbackProxy_CreateProxyObjectForPlayMontage_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSkeletalMeshComponent != nullptr)
		*InSkeletalMeshComponent = Parms.InSkeletalMeshComponent;

	if (PlayRate != nullptr)
		*PlayRate = Parms.PlayRate;

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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              BlendTime                                                        (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetSequenceWithInertialBlending(class UAnimSequenceBase* Sequence, float BlendTime, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetSequenceWithInertialBlending");

	Params::USequenceEvaluatorLibrary_SetSequenceWithInertialBlending_Params Parms{};

	Parms.Sequence = Sequence;
	Parms.BlendTime = BlendTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetSequence(class UAnimSequenceBase* Sequence, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetSequence");

	Params::USequenceEvaluatorLibrary_SetSequence_Params Parms{};

	Parms.Sequence = Sequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.SetExplicitTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// float                              Time                                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USequenceEvaluatorLibrary::SetExplicitTime(const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "SetExplicitTime");

	Params::USequenceEvaluatorLibrary_SetExplicitTime_Params Parms{};

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
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::GetSequence(class UAnimSequenceBase* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "GetSequence");

	Params::USequenceEvaluatorLibrary_GetSequence_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.GetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::GetAccumulatedTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "GetAccumulatedTime");

	Params::USequenceEvaluatorLibrary_GetAccumulatedTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluatorPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

bool USequenceEvaluatorLibrary::ConvertToSequenceEvaluatorPure(const struct FAnimNodeReference& Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "ConvertToSequenceEvaluatorPure");

	Params::USequenceEvaluatorLibrary_ConvertToSequenceEvaluatorPure_Params Parms{};

	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.ConvertToSequenceEvaluator
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FSequenceEvaluatorReference ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EAnimNodeReferenceConversionResult USequenceEvaluatorLibrary::ConvertToSequenceEvaluator(const struct FAnimNodeReference& Node, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "ConvertToSequenceEvaluator");

	Params::USequenceEvaluatorLibrary_ConvertToSequenceEvaluator_Params Parms{};

	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequenceEvaluatorLibrary.AdvanceTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference SequenceEvaluator                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference USequenceEvaluatorLibrary::AdvanceTime(float* PlayRate, const struct FSequenceEvaluatorReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequenceEvaluatorLibrary", "AdvanceTime");

	Params::USequenceEvaluatorLibrary_AdvanceTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayRate != nullptr)
		*PlayRate = Parms.PlayRate;

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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              StartPosition                                                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FAnimUpdateContext          UpdateContext                                                    (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              BlendTime                                                        (Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FAnimUpdateContext USequencePlayerLibrary::SetSequenceWithInertialBlending(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, float BlendTime, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetSequenceWithInertialBlending");

	Params::USequencePlayerLibrary_SetSequenceWithInertialBlending_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.Sequence = Sequence;
	Parms.BlendTime = BlendTime;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetSequence
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAnimSequenceBase*           Sequence                                                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USequencePlayerLibrary::SetSequence(const struct FSequencePlayerReference& SequencePlayer, class UAnimSequenceBase* Sequence, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "SetSequence");

	Params::USequencePlayerLibrary_SetSequence_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.Sequence = Sequence;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetPlayRate
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              PlayRate                                                         (Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USequencePlayerLibrary::SetPlayRate(const struct FSequencePlayerReference& SequencePlayer, float* PlayRate, const struct FSequencePlayerReference& ReturnValue)
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

	if (PlayRate != nullptr)
		*PlayRate = Parms.PlayRate;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.SetAccumulatedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Time                                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAnimSequenceBase*           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UAnimSequenceBase*           SequenceBase                                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FSequencePlayerReference    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

bool USequencePlayerLibrary::ConvertToSequencePlayerPure(const struct FAnimNodeReference& Node, const struct FSequencePlayerReference& SequencePlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ConvertToSequencePlayerPure");

	Params::USequencePlayerLibrary_ConvertToSequencePlayerPure_Params Parms{};

	Parms.Node = Node;
	Parms.SequencePlayer = SequencePlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.ConvertToSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FSequencePlayerReference    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EAnimNodeReferenceConversionResult USequencePlayerLibrary::ConvertToSequencePlayer(const struct FAnimNodeReference& Node, const struct FSequencePlayerReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ConvertToSequencePlayer");

	Params::USequencePlayerLibrary_ConvertToSequencePlayer_Params Parms{};

	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function AnimGraphRuntime.SequencePlayerLibrary.ComputePlayRateFromDuration
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSequencePlayerReference    SequencePlayer                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Duration                                                         (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USequencePlayerLibrary::ComputePlayRateFromDuration(const struct FSequencePlayerReference& SequencePlayer, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SequencePlayerLibrary", "ComputePlayRateFromDuration");

	Params::USequencePlayerLibrary_ComputePlayRateFromDuration_Params Parms{};

	Parms.SequencePlayer = SequencePlayer;
	Parms.ReturnValue = ReturnValue;

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
// struct FSkeletalControlReference   SkeletalControl                                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Alpha                                                            (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FSkeletalControlReference   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USkeletalControlLibrary::SetAlpha(struct FSkeletalControlReference* SkeletalControl, float Alpha, const struct FSkeletalControlReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "SetAlpha");

	Params::USkeletalControlLibrary_SetAlpha_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SkeletalControl != nullptr)
		*SkeletalControl = std::move(Parms.SkeletalControl);

}


// Function AnimGraphRuntime.SkeletalControlLibrary.GetAlpha
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSkeletalControlReference   SkeletalControl                                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FSkeletalControlReference   SkeletalControl                                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)

bool USkeletalControlLibrary::ConvertToSkeletalControlPure(const struct FAnimNodeReference& Node, struct FSkeletalControlReference* SkeletalControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "ConvertToSkeletalControlPure");

	Params::USkeletalControlLibrary_ConvertToSkeletalControlPure_Params Parms{};

	Parms.Node = Node;

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
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// enum class EAnimNodeReferenceConversionResultResult                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// struct FSkeletalControlReference   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EAnimNodeReferenceConversionResult USkeletalControlLibrary::ConvertToSkeletalControl(const struct FAnimNodeReference& Node, const struct FSkeletalControlReference& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalControlLibrary", "ConvertToSkeletalControl");

	Params::USkeletalControlLibrary_ConvertToSkeletalControl_Params Parms{};

	Parms.Node = Node;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


