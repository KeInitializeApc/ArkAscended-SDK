#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MotionWarping.AnimNotifyState_MotionWarping
// (None)

class UClass* UAnimNotifyState_MotionWarping::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotifyState_MotionWarping");

	return Clss;
}


// AnimNotifyState_MotionWarping MotionWarping.Default__AnimNotifyState_MotionWarping
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotifyState_MotionWarping* UAnimNotifyState_MotionWarping::GetDefaultObj()
{
	static class UAnimNotifyState_MotionWarping* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotifyState_MotionWarping*>(UAnimNotifyState_MotionWarping::StaticClass()->DefaultObject);

	return Default;
}


// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         Modifier                                                         (Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMotionWarpingComponent* UAnimNotifyState_MotionWarping::OnWarpUpdate(class URootMotionModifier** Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnWarpUpdate");

	Params::UAnimNotifyState_MotionWarping_OnWarpUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Modifier != nullptr)
		*Modifier = Parms.Modifier;

	return Parms.ReturnValue;

}


// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         Modifier                                                         (Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMotionWarpingComponent* UAnimNotifyState_MotionWarping::OnWarpEnd(class URootMotionModifier** Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnWarpEnd");

	Params::UAnimNotifyState_MotionWarping_OnWarpEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Modifier != nullptr)
		*Modifier = Parms.Modifier;

	return Parms.ReturnValue;

}


// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         Modifier                                                         (Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMotionWarpingComponent* UAnimNotifyState_MotionWarping::OnWarpBegin(class URootMotionModifier** Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnWarpBegin");

	Params::UAnimNotifyState_MotionWarping_OnWarpBegin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Modifier != nullptr)
		*Modifier = Parms.Modifier;

	return Parms.ReturnValue;

}


// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
// (Final, Native, Public, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         Modifier                                                         (Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMotionWarpingComponent* UAnimNotifyState_MotionWarping::OnRootMotionModifierUpdate(class URootMotionModifier** Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnRootMotionModifierUpdate");

	Params::UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modifier != nullptr)
		*Modifier = Parms.Modifier;

	return Parms.ReturnValue;

}


// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
// (Final, Native, Public, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         Modifier                                                         (Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMotionWarpingComponent* UAnimNotifyState_MotionWarping::OnRootMotionModifierDeactivate(class URootMotionModifier** Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnRootMotionModifierDeactivate");

	Params::UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modifier != nullptr)
		*Modifier = Parms.Modifier;

	return Parms.ReturnValue;

}


// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
// (Final, Native, Public, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         Modifier                                                         (Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UMotionWarpingComponent* UAnimNotifyState_MotionWarping::OnRootMotionModifierActivate(class URootMotionModifier** Modifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnRootMotionModifierActivate");

	Params::UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Modifier != nullptr)
		*Modifier = Parms.Modifier;

	return Parms.ReturnValue;

}


// Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// float                              StartTime                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              EndTime                                                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UAnimNotifyState_MotionWarping::AddRootMotionModifier(class UAnimSequenceBase* Animation, class URootMotionModifier** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "AddRootMotionModifier");

	Params::UAnimNotifyState_MotionWarping_AddRootMotionModifier_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class MotionWarping.MotionWarpingUtilities
// (None)

class UClass* UMotionWarpingUtilities::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotionWarpingUtilities");

	return Clss;
}


// MotionWarpingUtilities MotionWarping.Default__MotionWarpingUtilities
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotionWarpingUtilities* UMotionWarpingUtilities::GetDefaultObj()
{
	static class UMotionWarpingUtilities* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotionWarpingUtilities*>(UMotionWarpingUtilities::StaticClass()->DefaultObject);

	return Default;
}


// Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// TArray<struct FMotionWarpingWindowData>OutWindows                                                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMotionWarpingUtilities::GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<struct FMotionWarpingWindowData>* OutWindows)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingUtilities", "GetMotionWarpingWindowsFromAnimation");

	Params::UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutWindows != nullptr)
		*OutWindows = std::move(Parms.OutWindows);

}


// Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// class FName                        WarpTargetName                                                   (BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FMotionWarpingWindowData>OutWindows                                                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMotionWarpingUtilities::GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, class FName* WarpTargetName, TArray<struct FMotionWarpingWindowData>* OutWindows)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingUtilities", "GetMotionWarpingWindowsForWarpTargetFromAnimation");

	Params::UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WarpTargetName != nullptr)
		*WarpTargetName = Parms.WarpTargetName;

	if (OutWindows != nullptr)
		*OutWindows = std::move(Parms.OutWindows);

}


// Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// float                              StartTime                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              EndTime                                                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UMotionWarpingUtilities::ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, struct FTransform* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingUtilities", "ExtractRootMotionFromAnimation");

	Params::UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Class MotionWarping.MotionWarpingComponent
// (None)

class UClass* UMotionWarpingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MotionWarpingComponent");

	return Clss;
}


// MotionWarpingComponent MotionWarping.Default__MotionWarpingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMotionWarpingComponent* UMotionWarpingComponent::GetDefaultObj()
{
	static class UMotionWarpingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMotionWarpingComponent*>(UMotionWarpingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MotionWarping.MotionWarpingComponent.RemoveWarpTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        WarpTargetName                                                   (BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UMotionWarpingComponent::RemoveWarpTarget(class FName* WarpTargetName, int32* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "RemoveWarpTarget");

	Params::UMotionWarpingComponent_RemoveWarpTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WarpTargetName != nullptr)
		*WarpTargetName = Parms.WarpTargetName;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMotionWarpingComponent::DisableAllRootMotionModifiers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "DisableAllRootMotionModifiers");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        WarpTargetName                                                   (BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMotionWarpingComponent::AddOrUpdateWarpTargetFromTransform(class FName* WarpTargetName, struct FTransform* TargetTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTargetFromTransform");

	Params::UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WarpTargetName != nullptr)
		*WarpTargetName = Parms.WarpTargetName;

	if (TargetTransform != nullptr)
		*TargetTransform = std::move(Parms.TargetTransform);

}


// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        WarpTargetName                                                   (BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     TargetLocation                                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FRotator                    TargetRotation                                                   (ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FRotator UMotionWarpingComponent::AddOrUpdateWarpTargetFromLocationAndRotation(class FName* WarpTargetName, struct FVector* TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTargetFromLocationAndRotation");

	Params::UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WarpTargetName != nullptr)
		*WarpTargetName = Parms.WarpTargetName;

	if (TargetLocation != nullptr)
		*TargetLocation = std::move(Parms.TargetLocation);

	return Parms.ReturnValue;

}


// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        WarpTargetName                                                   (BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     TargetLocation                                                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)

void UMotionWarpingComponent::AddOrUpdateWarpTargetFromLocation(class FName* WarpTargetName, struct FVector* TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTargetFromLocation");

	Params::UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WarpTargetName != nullptr)
		*WarpTargetName = Parms.WarpTargetName;

	if (TargetLocation != nullptr)
		*TargetLocation = std::move(Parms.TargetLocation);

}


// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        WarpTargetName                                                   (BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USceneComponent*             Component                                                        (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        BoneName                                                         (ConstParm, Net, DisableEditOnTemplate, Config)
// bool                               bFollowComponent                                                 (BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UMotionWarpingComponent::AddOrUpdateWarpTargetFromComponent(class FName* WarpTargetName, class USceneComponent** Component, class FName BoneName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTargetFromComponent");

	Params::UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Params Parms{};

	Parms.BoneName = BoneName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WarpTargetName != nullptr)
		*WarpTargetName = Parms.WarpTargetName;

	if (Component != nullptr)
		*Component = Parms.Component;

	return Parms.ReturnValue;

}


// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMotionWarpingTarget        WarpTarget                                                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UMotionWarpingComponent::AddOrUpdateWarpTarget(struct FMotionWarpingTarget* WarpTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTarget");

	Params::UMotionWarpingComponent_AddOrUpdateWarpTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WarpTarget != nullptr)
		*WarpTarget = std::move(Parms.WarpTarget);

}


// Class MotionWarping.RootMotionModifier
// (None)

class UClass* URootMotionModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RootMotionModifier");

	return Clss;
}


// RootMotionModifier MotionWarping.Default__RootMotionModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class URootMotionModifier* URootMotionModifier::GetDefaultObj()
{
	static class URootMotionModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<URootMotionModifier*>(URootMotionModifier::StaticClass()->DefaultObject);

	return Default;
}


// Class MotionWarping.RootMotionModifier_Warp
// (None)

class UClass* URootMotionModifier_Warp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RootMotionModifier_Warp");

	return Clss;
}


// RootMotionModifier_Warp MotionWarping.Default__RootMotionModifier_Warp
// (Public, ClassDefaultObject, ArchetypeObject)

class URootMotionModifier_Warp* URootMotionModifier_Warp::GetDefaultObj()
{
	static class URootMotionModifier_Warp* Default = nullptr;

	if (!Default)
		Default = static_cast<URootMotionModifier_Warp*>(URootMotionModifier_Warp::StaticClass()->DefaultObject);

	return Default;
}


// Class MotionWarping.RootMotionModifier_SimpleWarp
// (None)

class UClass* URootMotionModifier_SimpleWarp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RootMotionModifier_SimpleWarp");

	return Clss;
}


// RootMotionModifier_SimpleWarp MotionWarping.Default__RootMotionModifier_SimpleWarp
// (Public, ClassDefaultObject, ArchetypeObject)

class URootMotionModifier_SimpleWarp* URootMotionModifier_SimpleWarp::GetDefaultObj()
{
	static class URootMotionModifier_SimpleWarp* Default = nullptr;

	if (!Default)
		Default = static_cast<URootMotionModifier_SimpleWarp*>(URootMotionModifier_SimpleWarp::StaticClass()->DefaultObject);

	return Default;
}


// Class MotionWarping.RootMotionModifier_Scale
// (None)

class UClass* URootMotionModifier_Scale::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RootMotionModifier_Scale");

	return Clss;
}


// RootMotionModifier_Scale MotionWarping.Default__RootMotionModifier_Scale
// (Public, ClassDefaultObject, ArchetypeObject)

class URootMotionModifier_Scale* URootMotionModifier_Scale::GetDefaultObj()
{
	static class URootMotionModifier_Scale* Default = nullptr;

	if (!Default)
		Default = static_cast<URootMotionModifier_Scale*>(URootMotionModifier_Scale::StaticClass()->DefaultObject);

	return Default;
}


// Function MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMotionWarpingComponent*     InMotionWarpingComp                                              (Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           InAnimation                                                      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InStartTime                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InEndTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InScale                                                          (Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class URootMotionModifier_Scale*   ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector URootMotionModifier_Scale::AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase** InAnimation, float InStartTime, float InEndTime, class URootMotionModifier_Scale** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RootMotionModifier_Scale", "AddRootMotionModifierScale");

	Params::URootMotionModifier_Scale_AddRootMotionModifierScale_Params Parms{};

	Parms.InMotionWarpingComp = InMotionWarpingComp;
	Parms.InStartTime = InStartTime;
	Parms.InEndTime = InEndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InAnimation != nullptr)
		*InAnimation = Parms.InAnimation;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
// (None)

class UClass* URootMotionModifier_AdjustmentBlendWarp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RootMotionModifier_AdjustmentBlendWarp");

	return Clss;
}


// RootMotionModifier_AdjustmentBlendWarp MotionWarping.Default__RootMotionModifier_AdjustmentBlendWarp
// (Public, ClassDefaultObject, ArchetypeObject)

class URootMotionModifier_AdjustmentBlendWarp* URootMotionModifier_AdjustmentBlendWarp::GetDefaultObj()
{
	static class URootMotionModifier_AdjustmentBlendWarp* Default = nullptr;

	if (!Default)
		Default = static_cast<URootMotionModifier_AdjustmentBlendWarp*>(URootMotionModifier_AdjustmentBlendWarp::StaticClass()->DefaultObject);

	return Default;
}


// Class MotionWarping.RootMotionModifier_SkewWarp
// (None)

class UClass* URootMotionModifier_SkewWarp::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RootMotionModifier_SkewWarp");

	return Clss;
}


// RootMotionModifier_SkewWarp MotionWarping.Default__RootMotionModifier_SkewWarp
// (Public, ClassDefaultObject, ArchetypeObject)

class URootMotionModifier_SkewWarp* URootMotionModifier_SkewWarp::GetDefaultObj()
{
	static class URootMotionModifier_SkewWarp* Default = nullptr;

	if (!Default)
		Default = static_cast<URootMotionModifier_SkewWarp*>(URootMotionModifier_SkewWarp::StaticClass()->DefaultObject);

	return Default;
}


// Function MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UMotionWarpingComponent*     InMotionWarpingComp                                              (Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           InAnimation                                                      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InStartTime                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InEndTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InWarpTargetName                                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EWarpPointAnimProvider  InWarpPointAnimProvider                                          (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InWarpPointAnimTransform                                         (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InWarpPointAnimBoneName                                          (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInWarpTranslation                                               (Edit, ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInIgnoreZAxis                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInWarpRotation                                                  (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMotionWarpRotationType InRotationType                                                   (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InWarpRotationTimeMultiplier                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class URootMotionModifier_SkewWarp*ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void URootMotionModifier_SkewWarp::AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase** InAnimation, float InStartTime, float InEndTime, class FName* InWarpTargetName, enum class EWarpPointAnimProvider* InWarpPointAnimProvider, struct FTransform* InWarpPointAnimTransform, class FName* InWarpPointAnimBoneName, bool* bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, enum class EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier, class URootMotionModifier_SkewWarp** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RootMotionModifier_SkewWarp", "AddRootMotionModifierSkewWarp");

	Params::URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Params Parms{};

	Parms.InMotionWarpingComp = InMotionWarpingComp;
	Parms.InStartTime = InStartTime;
	Parms.InEndTime = InEndTime;
	Parms.bInIgnoreZAxis = bInIgnoreZAxis;
	Parms.bInWarpRotation = bInWarpRotation;
	Parms.InRotationType = InRotationType;
	Parms.InWarpRotationTimeMultiplier = InWarpRotationTimeMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InAnimation != nullptr)
		*InAnimation = Parms.InAnimation;

	if (InWarpTargetName != nullptr)
		*InWarpTargetName = Parms.InWarpTargetName;

	if (InWarpPointAnimProvider != nullptr)
		*InWarpPointAnimProvider = Parms.InWarpPointAnimProvider;

	if (InWarpPointAnimTransform != nullptr)
		*InWarpPointAnimTransform = std::move(Parms.InWarpPointAnimTransform);

	if (InWarpPointAnimBoneName != nullptr)
		*InWarpPointAnimBoneName = Parms.InWarpPointAnimBoneName;

	if (bInWarpTranslation != nullptr)
		*bInWarpTranslation = Parms.bInWarpTranslation;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}

}


