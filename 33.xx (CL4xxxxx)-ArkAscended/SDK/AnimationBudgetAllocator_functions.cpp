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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FAnimationBudgetAllocatorParametersInParameters                                                     (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FAnimationBudgetAllocatorParameters UAnimationBudgetBlueprintLibrary::SetAnimationBudgetParameters(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationBudgetBlueprintLibrary", "SetAnimationBudgetParameters");

	Params::UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               bEnabled                                                         (Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)

void UAnimationBudgetBlueprintLibrary::EnableAnimationBudget(class UObject** WorldContextObject, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimationBudgetBlueprintLibrary", "EnableAnimationBudget");

	Params::UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

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
// bool                               bInAutoRegisterWithBudgetAllocator                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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


