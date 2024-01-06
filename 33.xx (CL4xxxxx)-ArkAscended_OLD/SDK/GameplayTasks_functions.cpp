#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GameplayTasks.GameplayTask
// (None)

class UClass* UGameplayTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask");

	return Clss;
}


// GameplayTask GameplayTasks.Default__GameplayTask
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask* UGameplayTask::GetDefaultObj()
{
	static class UGameplayTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask*>(UGameplayTask::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTasks.GameplayTask.ReadyForActivation
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameplayTask::ReadyForActivation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask", "ReadyForActivation");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask", "GenericGameplayTaskDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GameplayTasks.GameplayTask.EndTask
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UGameplayTask::EndTask()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask", "EndTask");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class GameplayTasks.GameplayTaskOwnerInterface
// (None)

class UClass* IGameplayTaskOwnerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTaskOwnerInterface");

	return Clss;
}


// GameplayTaskOwnerInterface GameplayTasks.Default__GameplayTaskOwnerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IGameplayTaskOwnerInterface* IGameplayTaskOwnerInterface::GetDefaultObj()
{
	static class IGameplayTaskOwnerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IGameplayTaskOwnerInterface*>(IGameplayTaskOwnerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTasks.GameplayTaskResource
// (None)

class UClass* UGameplayTaskResource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTaskResource");

	return Clss;
}


// GameplayTaskResource GameplayTasks.Default__GameplayTaskResource
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTaskResource* UGameplayTaskResource::GetDefaultObj()
{
	static class UGameplayTaskResource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTaskResource*>(UGameplayTaskResource::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTasks.GameplayTasksComponent
// (None)

class UClass* UGameplayTasksComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTasksComponent");

	return Clss;
}


// GameplayTasksComponent GameplayTasks.Default__GameplayTasksComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameplayTasksComponent* UGameplayTasksComponent::GetDefaultObj()
{
	static class UGameplayTasksComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTasksComponent*>(UGameplayTasksComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
// (Final, Native, Public, HasOutParams)
// Parameters:
// TArray<class UGameplayTask*>       PreviousSimulatedTasks                                           (Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

TArray<class UGameplayTask*> UGameplayTasksComponent::OnRep_SimulatedTasks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTasksComponent", "OnRep_SimulatedTasks");

	Params::UGameplayTasksComponent_OnRep_SimulatedTasks_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGameplayTaskOwnerInterface>TaskOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UGameplayTask*               Task                                                             (Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// uint8                              Priority                                                         (Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class UClass*>              AdditionalRequiredResources                                      (ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UClass*>              AdditionalClaimedResources                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EGameplayTaskRunResult  ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UClass*> UGameplayTasksComponent::K2_RunGameplayTask(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, class UGameplayTask** Task, enum class EGameplayTaskRunResult* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTasksComponent", "K2_RunGameplayTask");

	Params::UGameplayTasksComponent_K2_RunGameplayTask_Params Parms{};

	Parms.TaskOwner = TaskOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Task != nullptr)
		*Task = Parms.Task;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class GameplayTasks.GameplayTask_ClaimResource
// (None)

class UClass* UGameplayTask_ClaimResource::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_ClaimResource");

	return Clss;
}


// GameplayTask_ClaimResource GameplayTasks.Default__GameplayTask_ClaimResource
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::GetDefaultObj()
{
	static class UGameplayTask_ClaimResource* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_ClaimResource*>(UGameplayTask_ClaimResource::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGameplayTaskOwnerInterface>InTaskOwner                                                      (Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UClass*>              ResourceClasses                                                  (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// uint8                              Priority                                                         (Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FName                        TaskInstanceName                                                 (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UGameplayTask_ClaimResource* ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UGameplayTask_ClaimResource::ClaimResources(class UGameplayTask_ClaimResource** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ClaimResource", "ClaimResources");

	Params::UGameplayTask_ClaimResource_ClaimResources_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGameplayTaskOwnerInterface>InTaskOwner                                                      (Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      ResourceClass                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// uint8                              Priority                                                         (Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FName                        TaskInstanceName                                                 (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UGameplayTask_ClaimResource* ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UGameplayTask_ClaimResource::ClaimResource(class UClass* ResourceClass, class UGameplayTask_ClaimResource** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_ClaimResource", "ClaimResource");

	Params::UGameplayTask_ClaimResource_ClaimResource_Params Parms{};

	Parms.ResourceClass = ResourceClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class GameplayTasks.GameplayTask_SpawnActor
// (None)

class UClass* UGameplayTask_SpawnActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_SpawnActor");

	return Clss;
}


// GameplayTask_SpawnActor GameplayTasks.Default__GameplayTask_SpawnActor
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::GetDefaultObj()
{
	static class UGameplayTask_SpawnActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_SpawnActor*>(UGameplayTask_SpawnActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGameplayTaskOwnerInterface>TaskOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     SpawnLocation                                                    (Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    SpawnRotation                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      Class                                                            (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor)
// bool                               bSpawnOnlyOnAuthority                                            (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UGameplayTask_SpawnActor*    ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGameplayTask_SpawnActor::SpawnActor(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, const struct FVector& SpawnLocation, class UClass* Class, class UGameplayTask_SpawnActor** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_SpawnActor", "SpawnActor");

	Params::UGameplayTask_SpawnActor_SpawnActor_Params Parms{};

	Parms.TaskOwner = TaskOwner;
	Parms.SpawnLocation = SpawnLocation;
	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      SpawnedActor                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

class UObject* UGameplayTask_SpawnActor::FinishSpawningActor(class AActor* SpawnedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_SpawnActor", "FinishSpawningActor");

	Params::UGameplayTask_SpawnActor_FinishSpawningActor_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      SpawnedActor                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UGameplayTask_SpawnActor::BeginSpawningActor(class AActor* SpawnedActor, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_SpawnActor", "BeginSpawningActor");

	Params::UGameplayTask_SpawnActor_BeginSpawningActor_Params Parms{};

	Parms.SpawnedActor = SpawnedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// (None)

class UClass* UGameplayTask_TimeLimitedExecution::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_TimeLimitedExecution");

	return Clss;
}


// GameplayTask_TimeLimitedExecution GameplayTasks.Default__GameplayTask_TimeLimitedExecution
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_TimeLimitedExecution* UGameplayTask_TimeLimitedExecution::GetDefaultObj()
{
	static class UGameplayTask_TimeLimitedExecution* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_TimeLimitedExecution*>(UGameplayTask_TimeLimitedExecution::StaticClass()->DefaultObject);

	return Default;
}


// Class GameplayTasks.GameplayTask_WaitDelay
// (None)

class UClass* UGameplayTask_WaitDelay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayTask_WaitDelay");

	return Clss;
}


// GameplayTask_WaitDelay GameplayTasks.Default__GameplayTask_WaitDelay
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::GetDefaultObj()
{
	static class UGameplayTask_WaitDelay* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameplayTask_WaitDelay*>(UGameplayTask_WaitDelay::StaticClass()->DefaultObject);

	return Default;
}


// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class IGameplayTaskOwnerInterface>TaskOwner                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              Time                                                             (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// uint8                              Priority                                                         (Edit, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UGameplayTask_WaitDelay*     ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

uint8 UGameplayTask_WaitDelay::TaskWaitDelay(TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner, class UGameplayTask_WaitDelay** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_WaitDelay", "TaskWaitDelay");

	Params::UGameplayTask_WaitDelay_TaskWaitDelay_Params Parms{};

	Parms.TaskOwner = TaskOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	return Parms.ReturnValue;

}


// DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameplayTask_WaitDelay", "TaskDelayDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


