#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ThreadExecutionBlueprintNode.AsyncExecutionBlueprintTypes
// (None)

class UClass* UAsyncExecutionBlueprintTypes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncExecutionBlueprintTypes");

	return Clss;
}


// AsyncExecutionBlueprintTypes ThreadExecutionBlueprintNode.Default__AsyncExecutionBlueprintTypes
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncExecutionBlueprintTypes* UAsyncExecutionBlueprintTypes::GetDefaultObj()
{
	static class UAsyncExecutionBlueprintTypes* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncExecutionBlueprintTypes*>(UAsyncExecutionBlueprintTypes::StaticClass()->DefaultObject);

	return Default;
}


// Class ThreadExecutionBlueprintNode.Mutex
// (None)

class UClass* UMutex::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mutex");

	return Clss;
}


// Mutex ThreadExecutionBlueprintNode.Default__Mutex
// (Public, ClassDefaultObject, ArchetypeObject)

class UMutex* UMutex::GetDefaultObj()
{
	static class UMutex* Default = nullptr;

	if (!Default)
		Default = static_cast<UMutex*>(UMutex::StaticClass()->DefaultObject);

	return Default;
}


// Function ThreadExecutionBlueprintNode.Mutex.UnLock
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMutex::UnLock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mutex", "UnLock");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function ThreadExecutionBlueprintNode.Mutex.TryLock
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMutex::TryLock(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mutex", "TryLock");

	Params::UMutex_TryLock_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ThreadExecutionBlueprintNode.Mutex.Lock
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMutex::Lock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mutex", "Lock");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ThreadExecutionBlueprintNode.ThreadAsyncExecBase
// (None)

class UClass* UThreadAsyncExecBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThreadAsyncExecBase");

	return Clss;
}


// ThreadAsyncExecBase ThreadExecutionBlueprintNode.Default__ThreadAsyncExecBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UThreadAsyncExecBase* UThreadAsyncExecBase::GetDefaultObj()
{
	static class UThreadAsyncExecBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreadAsyncExecBase*>(UThreadAsyncExecBase::StaticClass()->DefaultObject);

	return Default;
}


// Class ThreadExecutionBlueprintNode.ThreadAsyncExecLoop
// (None)

class UClass* UThreadAsyncExecLoop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThreadAsyncExecLoop");

	return Clss;
}


// ThreadAsyncExecLoop ThreadExecutionBlueprintNode.Default__ThreadAsyncExecLoop
// (Public, ClassDefaultObject, ArchetypeObject)

class UThreadAsyncExecLoop* UThreadAsyncExecLoop::GetDefaultObj()
{
	static class UThreadAsyncExecLoop* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreadAsyncExecLoop*>(UThreadAsyncExecLoop::StaticClass()->DefaultObject);

	return Default;
}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLoop.CreateThreadExecLoop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Interval                                                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               bLongTask                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class UThreadAsyncExecLoop*        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UThreadAsyncExecLoop::CreateThreadExecLoop(float Interval, class UThreadAsyncExecLoop* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecLoop", "CreateThreadExecLoop");

	Params::UThreadAsyncExecLoop_CreateThreadExecLoop_Params Parms{};

	Parms.Interval = Interval;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ThreadExecutionBlueprintNode.SyncExecOnce
// (None)

class UClass* USyncExecOnce::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SyncExecOnce");

	return Clss;
}


// SyncExecOnce ThreadExecutionBlueprintNode.Default__SyncExecOnce
// (Public, ClassDefaultObject, ArchetypeObject)

class USyncExecOnce* USyncExecOnce::GetDefaultObj()
{
	static class USyncExecOnce* Default = nullptr;

	if (!Default)
		Default = static_cast<USyncExecOnce*>(USyncExecOnce::StaticClass()->DefaultObject);

	return Default;
}


// Function ThreadExecutionBlueprintNode.SyncExecOnce.CreateSyncExecOnce
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USyncExecOnce*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USyncExecOnce::CreateSyncExecOnce(class USyncExecOnce* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SyncExecOnce", "CreateSyncExecOnce");

	Params::USyncExecOnce_CreateSyncExecOnce_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary
// (None)

class UClass* UThreadAsyncExecLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThreadAsyncExecLibrary");

	return Clss;
}


// ThreadAsyncExecLibrary ThreadExecutionBlueprintNode.Default__ThreadAsyncExecLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UThreadAsyncExecLibrary* UThreadAsyncExecLibrary::GetDefaultObj()
{
	static class UThreadAsyncExecLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreadAsyncExecLibrary*>(UThreadAsyncExecLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.ThreadWait
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Seconds                                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

float UThreadAsyncExecLibrary::ThreadWait()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecLibrary", "ThreadWait");

	Params::UThreadAsyncExecLibrary_ThreadWait_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.SetTickableWhenPaused
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UThreadAsyncExecTick*        TickHandle                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

class UThreadAsyncExecTick* UThreadAsyncExecLibrary::SetTickableWhenPaused(bool* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecLibrary", "SetTickableWhenPaused");

	Params::UThreadAsyncExecLibrary_SetTickableWhenPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

	return Parms.ReturnValue;

}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.SetTickable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UThreadAsyncExecTick*        TickHandle                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

class UThreadAsyncExecTick* UThreadAsyncExecLibrary::SetTickable(bool* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecLibrary", "SetTickable");

	Params::UThreadAsyncExecLibrary_SetTickable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

	return Parms.ReturnValue;

}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsTickableWhenPaused
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UThreadAsyncExecTick*        TickHandle                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UThreadAsyncExecTick* UThreadAsyncExecLibrary::IsTickableWhenPaused(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecLibrary", "IsTickableWhenPaused");

	Params::UThreadAsyncExecLibrary_IsTickableWhenPaused_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsTickable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UThreadAsyncExecTick*        TickHandle                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UThreadAsyncExecTick* UThreadAsyncExecLibrary::IsTickable(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecLibrary", "IsTickable");

	Params::UThreadAsyncExecLibrary_IsTickable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.IsGameThread
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UThreadAsyncExecLibrary::IsGameThread(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecLibrary", "IsGameThread");

	Params::UThreadAsyncExecLibrary_IsGameThread_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.GetCurrentThreadName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UThreadAsyncExecLibrary::GetCurrentThreadName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecLibrary", "GetCurrentThreadName");

	Params::UThreadAsyncExecLibrary_GetCurrentThreadName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.GetCurrentThreadID
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UThreadAsyncExecLibrary::GetCurrentThreadID(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecLibrary", "GetCurrentThreadID");

	Params::UThreadAsyncExecLibrary_GetCurrentThreadID_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.ExecIsGameThread
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               bIsInGameThread                                                  (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)

bool UThreadAsyncExecLibrary::ExecIsGameThread()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecLibrary", "ExecIsGameThread");

	Params::UThreadAsyncExecLibrary_ExecIsGameThread_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.BreakNextTick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UThreadAsyncExecTick*        TickHandle                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)

class UThreadAsyncExecTick* UThreadAsyncExecLibrary::BreakNextTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecLibrary", "BreakNextTick");

	Params::UThreadAsyncExecLibrary_BreakNextTick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecLibrary.BreakNextLoop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UThreadAsyncExecLoop*        LoopHandle                                                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)

class UThreadAsyncExecLoop* UThreadAsyncExecLibrary::BreakNextLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecLibrary", "BreakNextLoop");

	Params::UThreadAsyncExecLibrary_BreakNextLoop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ThreadExecutionBlueprintNode.ThreadAsyncExecOnce
// (None)

class UClass* UThreadAsyncExecOnce::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThreadAsyncExecOnce");

	return Clss;
}


// ThreadAsyncExecOnce ThreadExecutionBlueprintNode.Default__ThreadAsyncExecOnce
// (Public, ClassDefaultObject, ArchetypeObject)

class UThreadAsyncExecOnce* UThreadAsyncExecOnce::GetDefaultObj()
{
	static class UThreadAsyncExecOnce* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreadAsyncExecOnce*>(UThreadAsyncExecOnce::StaticClass()->DefaultObject);

	return Default;
}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecOnce.CreateThreadExecOnce
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bLongTask                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class UThreadAsyncExecOnce*        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UThreadAsyncExecOnce::CreateThreadExecOnce(class UThreadAsyncExecOnce* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecOnce", "CreateThreadExecOnce");

	Params::UThreadAsyncExecOnce_CreateThreadExecOnce_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ThreadExecutionBlueprintNode.ThreadAsyncExecTick
// (None)

class UClass* UThreadAsyncExecTick::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThreadAsyncExecTick");

	return Clss;
}


// ThreadAsyncExecTick ThreadExecutionBlueprintNode.Default__ThreadAsyncExecTick
// (Public, ClassDefaultObject, ArchetypeObject)

class UThreadAsyncExecTick* UThreadAsyncExecTick::GetDefaultObj()
{
	static class UThreadAsyncExecTick* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreadAsyncExecTick*>(UThreadAsyncExecTick::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction ThreadExecutionBlueprintNode.ThreadAsyncExecTick.OnTick__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              DeltaSeconds                                                     (ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UThreadAsyncExecTick*        TickHandle                                                       (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)

class UThreadAsyncExecTick* UThreadAsyncExecTick::OnTick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecTick", "OnTick__DelegateSignature");

	Params::UThreadAsyncExecTick_OnTick__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecTick.CreateThreadExecTick
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bLongTask                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class UThreadAsyncExecTick*        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UThreadAsyncExecTick::CreateThreadExecTick(class UThreadAsyncExecTick* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecTick", "CreateThreadExecTick");

	Params::UThreadAsyncExecTick_CreateThreadExecTick_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ThreadExecutionBlueprintNode.ThreadAsyncExecTick.BreakNextTick
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UThreadAsyncExecTick::BreakNextTick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadAsyncExecTick", "BreakNextTick");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class ThreadExecutionBlueprintNode.ThreadExecDeveloperSettings
// (None)

class UClass* UThreadExecDeveloperSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThreadExecDeveloperSettings");

	return Clss;
}


// ThreadExecDeveloperSettings ThreadExecutionBlueprintNode.Default__ThreadExecDeveloperSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UThreadExecDeveloperSettings* UThreadExecDeveloperSettings::GetDefaultObj()
{
	static class UThreadExecDeveloperSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreadExecDeveloperSettings*>(UThreadExecDeveloperSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function ThreadExecutionBlueprintNode.ThreadExecDeveloperSettings.Get
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UThreadExecDeveloperSettings*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UThreadExecDeveloperSettings::Get(class UThreadExecDeveloperSettings* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadExecDeveloperSettings", "Get");

	Params::UThreadExecDeveloperSettings_Get_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ThreadExecutionBlueprintNode.ThreadNodeSubsystem
// (None)

class UClass* UThreadNodeSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThreadNodeSubsystem");

	return Clss;
}


// ThreadNodeSubsystem ThreadExecutionBlueprintNode.Default__ThreadNodeSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UThreadNodeSubsystem* UThreadNodeSubsystem::GetDefaultObj()
{
	static class UThreadNodeSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreadNodeSubsystem*>(UThreadNodeSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecTicks
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TSet<class UThreadAsyncExecTick*>  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UThreadNodeSubsystem::GetAllThreadExecTicks(TSet<class UThreadAsyncExecTick*> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadNodeSubsystem", "GetAllThreadExecTicks");

	Params::UThreadNodeSubsystem_GetAllThreadExecTicks_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecOnces
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TSet<class UThreadAsyncExecOnce*>  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UThreadNodeSubsystem::GetAllThreadExecOnces(TSet<class UThreadAsyncExecOnce*> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadNodeSubsystem", "GetAllThreadExecOnces");

	Params::UThreadNodeSubsystem_GetAllThreadExecOnces_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecNodes
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TSet<class UThreadAsyncExecBase*>  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UThreadNodeSubsystem::GetAllThreadExecNodes(TSet<class UThreadAsyncExecBase*> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadNodeSubsystem", "GetAllThreadExecNodes");

	Params::UThreadNodeSubsystem_GetAllThreadExecNodes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllThreadExecLoops
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TSet<class UThreadAsyncExecLoop*>  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UThreadNodeSubsystem::GetAllThreadExecLoops(TSet<class UThreadAsyncExecLoop*> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadNodeSubsystem", "GetAllThreadExecLoops");

	Params::UThreadNodeSubsystem_GetAllThreadExecLoops_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.GetAllMutexes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSet<class UMutex*>                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UThreadNodeSubsystem::GetAllMutexes(TSet<class UMutex*> ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadNodeSubsystem", "GetAllMutexes");

	Params::UThreadNodeSubsystem_GetAllMutexes_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.DestoryMutex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMutex*                      Mutex                                                            (ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst)

void UThreadNodeSubsystem::DestoryMutex(class UMutex* Mutex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadNodeSubsystem", "DestoryMutex");

	Params::UThreadNodeSubsystem_DestoryMutex_Params Parms{};

	Parms.Mutex = Mutex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ThreadExecutionBlueprintNode.ThreadNodeSubsystem.CreateNewMutex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMutex*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UThreadNodeSubsystem::CreateNewMutex(class UMutex* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreadNodeSubsystem", "CreateNewMutex");

	Params::UThreadNodeSubsystem_CreateNewMutex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


