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
// class UMotionWarpingComponent*     MotionWarpingComp                                                (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         Modifier                                                         (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class URootMotionModifier* UAnimNotifyState_MotionWarping::OnWarpUpdate(class UMotionWarpingComponent** MotionWarpingComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnWarpUpdate");

	Params::UAnimNotifyState_MotionWarping_OnWarpUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MotionWarpingComp != nullptr)
		*MotionWarpingComp = Parms.MotionWarpingComp;

	return Parms.ReturnValue;

}


// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         Modifier                                                         (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class URootMotionModifier* UAnimNotifyState_MotionWarping::OnWarpEnd(class UMotionWarpingComponent** MotionWarpingComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnWarpEnd");

	Params::UAnimNotifyState_MotionWarping_OnWarpEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MotionWarpingComp != nullptr)
		*MotionWarpingComp = Parms.MotionWarpingComp;

	return Parms.ReturnValue;

}


// Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         Modifier                                                         (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class URootMotionModifier* UAnimNotifyState_MotionWarping::OnWarpBegin(class UMotionWarpingComponent** MotionWarpingComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnWarpBegin");

	Params::UAnimNotifyState_MotionWarping_OnWarpBegin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MotionWarpingComp != nullptr)
		*MotionWarpingComp = Parms.MotionWarpingComp;

	return Parms.ReturnValue;

}


// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
// (Final, Native, Public, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         Modifier                                                         (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class URootMotionModifier* UAnimNotifyState_MotionWarping::OnRootMotionModifierUpdate(class UMotionWarpingComponent** MotionWarpingComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnRootMotionModifierUpdate");

	Params::UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MotionWarpingComp != nullptr)
		*MotionWarpingComp = Parms.MotionWarpingComp;

	return Parms.ReturnValue;

}


// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
// (Final, Native, Public, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         Modifier                                                         (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class URootMotionModifier* UAnimNotifyState_MotionWarping::OnRootMotionModifierDeactivate(class UMotionWarpingComponent** MotionWarpingComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnRootMotionModifierDeactivate");

	Params::UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MotionWarpingComp != nullptr)
		*MotionWarpingComp = Parms.MotionWarpingComp;

	return Parms.ReturnValue;

}


// Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
// (Final, Native, Public, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         Modifier                                                         (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

class URootMotionModifier* UAnimNotifyState_MotionWarping::OnRootMotionModifierActivate(class UMotionWarpingComponent** MotionWarpingComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "OnRootMotionModifierActivate");

	Params::UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MotionWarpingComp != nullptr)
		*MotionWarpingComp = Parms.MotionWarpingComp;

	return Parms.ReturnValue;

}


// Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UMotionWarpingComponent*     MotionWarpingComp                                                (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// float                              StartTime                                                        (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              EndTime                                                          (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class URootMotionModifier*         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class URootMotionModifier* UAnimNotifyState_MotionWarping::AddRootMotionModifier(class UMotionWarpingComponent** MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AnimNotifyState_MotionWarping", "AddRootMotionModifier");

	Params::UAnimNotifyState_MotionWarping_AddRootMotionModifier_Params Parms{};

	Parms.Animation = Animation;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MotionWarpingComp != nullptr)
		*MotionWarpingComp = Parms.MotionWarpingComp;

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
// TArray<struct FMotionWarpingWindowData>OutWindows                                                       (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FMotionWarpingWindowData> UMotionWarpingUtilities::GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation)
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

	return Parms.ReturnValue;

}


// Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// class FName                        WarpTargetName                                                   (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FMotionWarpingWindowData>OutWindows                                                       (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

TArray<struct FMotionWarpingWindowData> UMotionWarpingUtilities::GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation)
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

	return Parms.ReturnValue;

}


// Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UAnimSequenceBase*           Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// float                              StartTime                                                        (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              EndTime                                                          (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTransform UMotionWarpingUtilities::ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingUtilities", "ExtractRootMotionFromAnimation");

	Params::UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Params Parms{};

	Parms.Animation = Animation;
	Parms.StartTime = StartTime;
	Parms.EndTime = EndTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class FName                        WarpTargetName                                                   (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UMotionWarpingComponent::RemoveWarpTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "RemoveWarpTarget");

	Params::UMotionWarpingComponent_RemoveWarpTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// class FName                        WarpTargetName                                                   (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  TargetTransform                                                  (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FTransform UMotionWarpingComponent::AddOrUpdateWarpTargetFromTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTargetFromTransform");

	Params::UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        WarpTargetName                                                   (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FRotator                    TargetRotation                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

struct FVector UMotionWarpingComponent::AddOrUpdateWarpTargetFromLocationAndRotation(const struct FRotator& TargetRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTargetFromLocationAndRotation");

	Params::UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Params Parms{};

	Parms.TargetRotation = TargetRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        WarpTargetName                                                   (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

struct FVector UMotionWarpingComponent::AddOrUpdateWarpTargetFromLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTargetFromLocation");

	Params::UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        WarpTargetName                                                   (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USceneComponent*             Component                                                        (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        BoneName                                                         (ConstParm, Net, DisableEditOnTemplate, Config)
// bool                               bFollowComponent                                                 (ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class USceneComponent* UMotionWarpingComponent::AddOrUpdateWarpTargetFromComponent(class FName BoneName, bool bFollowComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTargetFromComponent");

	Params::UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Params Parms{};

	Parms.BoneName = BoneName;
	Parms.bFollowComponent = bFollowComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMotionWarpingTarget        WarpTarget                                                       (EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FMotionWarpingTarget UMotionWarpingComponent::AddOrUpdateWarpTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MotionWarpingComponent", "AddOrUpdateWarpTarget");

	Params::UMotionWarpingComponent_AddOrUpdateWarpTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// class UMotionWarpingComponent*     InMotionWarpingComp                                              (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InStartTime                                                      (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InEndTime                                                        (Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InScale                                                          (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)
// class URootMotionModifier_Scale*   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class URootMotionModifier_Scale* URootMotionModifier_Scale::AddRootMotionModifierScale(struct FVector* InScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RootMotionModifier_Scale", "AddRootMotionModifierScale");

	Params::URootMotionModifier_Scale_AddRootMotionModifierScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InScale != nullptr)
		*InScale = std::move(Parms.InScale);

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
// class UMotionWarpingComponent*     InMotionWarpingComp                                              (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimSequenceBase*           InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InStartTime                                                      (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InEndTime                                                        (Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InWarpTargetName                                                 (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EWarpPointAnimProvider  InWarpPointAnimProvider                                          (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InWarpPointAnimTransform                                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InWarpPointAnimBoneName                                          (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInWarpTranslation                                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInIgnoreZAxis                                                   (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bInWarpRotation                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EMotionWarpRotationType InRotationType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InWarpRotationTimeMultiplier                                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class URootMotionModifier_SkewWarp*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class URootMotionModifier_SkewWarp* URootMotionModifier_SkewWarp::AddRootMotionModifierSkewWarp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RootMotionModifier_SkewWarp", "AddRootMotionModifierSkewWarp");

	Params::URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


