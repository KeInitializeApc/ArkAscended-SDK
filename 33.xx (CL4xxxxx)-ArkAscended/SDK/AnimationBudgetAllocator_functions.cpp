#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// (None)

class UClass* UAnimationBudgetBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimationBudgetBlueprintLibrary");

	return Clss;
}


// AnimationBudgetBlueprintLibrary AnimationBudgetAllocator.Default__AnimationBudgetBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimationBudgetBlueprintLibrary* UAnimationBudgetBlueprintLibrary::GetDefaultObj()
{
	static class UAnimationBudgetBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimationBudgetBlueprintLibrary*>(UAnimationBudgetBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAnimationBudgetAllocatorParametersInParameters                                                     (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)

void UAnimationBudgetBlueprintLibrary::SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationBudgetBlueprintLibrary", "SetAnimationBudgetParameters");

	Params::UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InParameters = InParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bEnabled                                                         (Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

bool UAnimationBudgetBlueprintLibrary::EnableAnimationBudget(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationBudgetBlueprintLibrary", "EnableAnimationBudget");

	Params::UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// (SceneComponent, PrimitiveComponent, SkinnedMeshComponent, SkeletalMeshComponent)

class UClass* USkeletalMeshComponentBudgeted::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkeletalMeshComponentBudgeted");

	return Clss;
}


// SkeletalMeshComponentBudgeted AnimationBudgetAllocator.Default__SkeletalMeshComponentBudgeted
// (Public, ClassDefaultObject, ArchetypeObject)

class USkeletalMeshComponentBudgeted* USkeletalMeshComponentBudgeted::GetDefaultObj()
{
	static class USkeletalMeshComponentBudgeted* Default = nullptr;

	if (!Default)
		Default = static_cast<USkeletalMeshComponentBudgeted*>(USkeletalMeshComponentBudgeted::StaticClass()->DefaultObject);

	return Default;
}


// Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAutoRegisterWithBudgetAllocator                               (Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

bool USkeletalMeshComponentBudgeted::SetAutoRegisterWithBudgetAllocator()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SkeletalMeshComponentBudgeted", "SetAutoRegisterWithBudgetAllocator");

	Params::USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


