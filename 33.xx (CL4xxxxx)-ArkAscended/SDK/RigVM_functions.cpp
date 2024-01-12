#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class RigVM.RigVMHost
// (None)

class UClass* URigVMHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMHost");

	return Clss;
}


// RigVMHost RigVM.Default__RigVMHost
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVMHost* URigVMHost::GetDefaultObj()
{
	static class URigVMHost* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMHost*>(URigVMHost::StaticClass()->DefaultObject);

	return Default;
}


// Function RigVM.RigVMHost.SupportsEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InEventName                                                      (Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool URigVMHost::SupportsEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SupportsEvent");

	Params::URigVMHost_SupportsEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.SetVariableFromString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class FString                      InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool URigVMHost::SetVariableFromString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SetVariableFromString");

	Params::URigVMHost_SetVariableFromString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.SetFramesPerSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFramesPerSecond                                                (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float URigVMHost::SetFramesPerSecond()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SetFramesPerSecond");

	Params::URigVMHost_SetFramesPerSecond_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.SetDeltaTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float URigVMHost::SetDeltaTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SetDeltaTime");

	Params::URigVMHost_SetDeltaTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.SetAbsoluteTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAbsoluteTime                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               InSetDeltaTimeZero                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool URigVMHost::SetAbsoluteTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SetAbsoluteTime");

	Params::URigVMHost_SetAbsoluteTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.SetAbsoluteAndDeltaTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAbsoluteTime                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float URigVMHost::SetAbsoluteAndDeltaTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SetAbsoluteAndDeltaTime");

	Params::URigVMHost_SetAbsoluteAndDeltaTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.RequestRunOnceEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEventName                                                      (Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InEventIndex                                                     (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

int32 URigVMHost::RequestRunOnceEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "RequestRunOnceEvent");

	Params::URigVMHost_RequestRunOnceEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.RequestInit
// (Native, Public, BlueprintCallable)
// Parameters:

void URigVMHost::RequestInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "RequestInit");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.RemoveRunOnceEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEventName                                                      (Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool URigVMHost::RemoveRunOnceEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "RemoveRunOnceEvent");

	Params::URigVMHost_RemoveRunOnceEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.GetVM
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URigVM*                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class URigVM* URigVMHost::GetVM()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetVM");

	Params::URigVMHost_GetVM_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.GetVariableType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName URigVMHost::GetVariableType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetVariableType");

	Params::URigVMHost_GetVariableType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.GetVariableAsString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InVariableName                                                   (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString URigVMHost::GetVariableAsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetVariableAsString");

	Params::URigVMHost_GetVariableAsString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.GetSupportedEvents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class FName> URigVMHost::GetSupportedEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetSupportedEvents");

	Params::URigVMHost_GetSupportedEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.GetScriptAccessibleVariables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class FName> URigVMHost::GetScriptAccessibleVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetScriptAccessibleVariables");

	Params::URigVMHost_GetScriptAccessibleVariables_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.GetDeltaTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float URigVMHost::GetDeltaTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetDeltaTime");

	Params::URigVMHost_GetDeltaTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.GetCurrentFramesPerSecond
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float URigVMHost::GetCurrentFramesPerSecond()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetCurrentFramesPerSecond");

	Params::URigVMHost_GetCurrentFramesPerSecond_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.GetAbsoluteTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float URigVMHost::GetAbsoluteTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetAbsoluteTime");

	Params::URigVMHost_GetAbsoluteTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.FindRigVMHosts
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// class UClass*                      OptionalClass                                                    (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// TArray<class URigVMHost*>          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class URigVMHost*> URigVMHost::FindRigVMHosts(class UObject* Outer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "FindRigVMHosts");

	Params::URigVMHost_FindRigVMHosts_Params Parms{};

	Parms.Outer = Outer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.ExecuteEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEventName                                                      (Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool URigVMHost::ExecuteEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "ExecuteEvent");

	Params::URigVMHost_ExecuteEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.Execute
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEventName                                                      (Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool URigVMHost::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "Execute");

	Params::URigVMHost_Execute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.CanExecute
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool URigVMHost::CanExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "CanExecute");

	Params::URigVMHost_CanExecute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RigVM.RigVMBlueprintGeneratedClass
// (Field, Struct, Class)

class UClass* URigVMBlueprintGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMBlueprintGeneratedClass");

	return Clss;
}


// RigVMBlueprintGeneratedClass RigVM.Default__RigVMBlueprintGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVMBlueprintGeneratedClass* URigVMBlueprintGeneratedClass::GetDefaultObj()
{
	static class URigVMBlueprintGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMBlueprintGeneratedClass*>(URigVMBlueprintGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class RigVM.RigVMUserWorkflowOptions
// (None)

class UClass* URigVMUserWorkflowOptions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMUserWorkflowOptions");

	return Clss;
}


// RigVMUserWorkflowOptions RigVM.Default__RigVMUserWorkflowOptions
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVMUserWorkflowOptions* URigVMUserWorkflowOptions::GetDefaultObj()
{
	static class URigVMUserWorkflowOptions* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMUserWorkflowOptions*>(URigVMUserWorkflowOptions::StaticClass()->DefaultObject);

	return Default;
}


// Function RigVM.RigVMUserWorkflowOptions.RequiresDialog
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool URigVMUserWorkflowOptions::RequiresDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "RequiresDialog");

	Params::URigVMUserWorkflowOptions_RequiresDialog_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMUserWorkflowOptions.ReportWarning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InMessage                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URigVMUserWorkflowOptions::ReportWarning(class FString* InMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "ReportWarning");

	Params::URigVMUserWorkflowOptions_ReportWarning_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMessage != nullptr)
		*InMessage = std::move(Parms.InMessage);

}


// Function RigVM.RigVMUserWorkflowOptions.ReportInfo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InMessage                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URigVMUserWorkflowOptions::ReportInfo(class FString* InMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "ReportInfo");

	Params::URigVMUserWorkflowOptions_ReportInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMessage != nullptr)
		*InMessage = std::move(Parms.InMessage);

}


// Function RigVM.RigVMUserWorkflowOptions.ReportError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InMessage                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void URigVMUserWorkflowOptions::ReportError(class FString* InMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "ReportError");

	Params::URigVMUserWorkflowOptions_ReportError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMessage != nullptr)
		*InMessage = std::move(Parms.InMessage);

}


// Function RigVM.RigVMUserWorkflowOptions.IsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool URigVMUserWorkflowOptions::IsValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "IsValid");

	Params::URigVMUserWorkflowOptions_IsValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RigVM.RigVMGraphFunctionHost
// (None)

class UClass* IRigVMGraphFunctionHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMGraphFunctionHost");

	return Clss;
}


// RigVMGraphFunctionHost RigVM.Default__RigVMGraphFunctionHost
// (Public, ClassDefaultObject, ArchetypeObject)

class IRigVMGraphFunctionHost* IRigVMGraphFunctionHost::GetDefaultObj()
{
	static class IRigVMGraphFunctionHost* Default = nullptr;

	if (!Default)
		Default = static_cast<IRigVMGraphFunctionHost*>(IRigVMGraphFunctionHost::StaticClass()->DefaultObject);

	return Default;
}


// Class RigVM.RigVM
// (None)

class UClass* URigVM::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVM");

	return Clss;
}


// RigVM RigVM.Default__RigVM
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVM* URigVM::GetDefaultObj()
{
	static class URigVM* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVM*>(URigVM::StaticClass()->DefaultObject);

	return Default;
}


// Function RigVM.RigVM.SetParameterValueVector2D
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 URigVM::SetParameterValueVector2D(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueVector2D");

	Params::URigVM_SetParameterValueVector2D_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.SetParameterValueVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 URigVM::SetParameterValueVector(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueVector");

	Params::URigVM_SetParameterValueVector_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.SetParameterValueTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 URigVM::SetParameterValueTransform(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueTransform");

	Params::URigVM_SetParameterValueTransform_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.SetParameterValueString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 URigVM::SetParameterValueString(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueString");

	Params::URigVM_SetParameterValueString_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.SetParameterValueQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FQuat                       InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 URigVM::SetParameterValueQuat(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueQuat");

	Params::URigVM_SetParameterValueQuat_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.SetParameterValueName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FName                        InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 URigVM::SetParameterValueName(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueName");

	Params::URigVM_SetParameterValueName_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.SetParameterValueInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 URigVM::SetParameterValueInt(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueInt");

	Params::URigVM_SetParameterValueInt_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.SetParameterValueFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 URigVM::SetParameterValueFloat(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueFloat");

	Params::URigVM_SetParameterValueFloat_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.SetParameterValueDouble
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 URigVM::SetParameterValueDouble(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueDouble");

	Params::URigVM_SetParameterValueDouble_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.SetParameterValueBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 URigVM::SetParameterValueBool(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "SetParameterValueBool");

	Params::URigVM_SetParameterValueBool_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetStatistics
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRigVMStatistics            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRigVMStatistics URigVM::GetStatistics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetStatistics");

	Params::URigVM_GetStatistics_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetRigVMFunctionName
// (Native, Public, Const)
// Parameters:
// int32                              InFunctionIndex                                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString URigVM::GetRigVMFunctionName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetRigVMFunctionName");

	Params::URigVM_GetRigVMFunctionName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueVector2D
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D URigVM::GetParameterValueVector2D(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueVector2D");

	Params::URigVM_GetParameterValueVector2D_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector URigVM::GetParameterValueVector(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueVector");

	Params::URigVM_GetParameterValueVector_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FTransform URigVM::GetParameterValueTransform(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueTransform");

	Params::URigVM_GetParameterValueTransform_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString URigVM::GetParameterValueString(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueString");

	Params::URigVM_GetParameterValueString_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FQuat                       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FQuat URigVM::GetParameterValueQuat(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueQuat");

	Params::URigVM_GetParameterValueQuat_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName URigVM::GetParameterValueName(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueName");

	Params::URigVM_GetParameterValueName_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 URigVM::GetParameterValueInt(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueInt");

	Params::URigVM_GetParameterValueInt_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float URigVM::GetParameterValueFloat(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueFloat");

	Params::URigVM_GetParameterValueFloat_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueDouble
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

double URigVM::GetParameterValueDouble(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueDouble");

	Params::URigVM_GetParameterValueDouble_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool URigVM::GetParameterValueBool(class FName InParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueBool");

	Params::URigVM_GetParameterValueBool_Params Parms{};

	Parms.InParameterName = InParameterName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.Execute
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEntryName                                                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool URigVM::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "Execute");

	Params::URigVM_Execute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.AddRigVMFunction
// (Native, Public, HasOutParams)
// Parameters:
// class UScriptStruct*               InRigVMStruct                                                    (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        InMethodName                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 URigVM::AddRigVMFunction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "AddRigVMFunction");

	Params::URigVM_AddRigVMFunction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class RigVM.RigVMMemoryStorageGeneratorClass
// (Field, Struct, Class)

class UClass* URigVMMemoryStorageGeneratorClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemoryStorageGeneratorClass");

	return Clss;
}


// RigVMMemoryStorageGeneratorClass RigVM.Default__RigVMMemoryStorageGeneratorClass
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVMMemoryStorageGeneratorClass* URigVMMemoryStorageGeneratorClass::GetDefaultObj()
{
	static class URigVMMemoryStorageGeneratorClass* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemoryStorageGeneratorClass*>(URigVMMemoryStorageGeneratorClass::StaticClass()->DefaultObject);

	return Default;
}


// Class RigVM.RigVMMemoryStorage
// (None)

class UClass* URigVMMemoryStorage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMMemoryStorage");

	return Clss;
}


// RigVMMemoryStorage RigVM.Default__RigVMMemoryStorage
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVMMemoryStorage* URigVMMemoryStorage::GetDefaultObj()
{
	static class URigVMMemoryStorage* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMMemoryStorage*>(URigVMMemoryStorage::StaticClass()->DefaultObject);

	return Default;
}


// Class RigVM.RigVMNativized
// (None)

class UClass* URigVMNativized::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RigVMNativized");

	return Clss;
}


// RigVMNativized RigVM.Default__RigVMNativized
// (Public, ClassDefaultObject, ArchetypeObject)

class URigVMNativized* URigVMNativized::GetDefaultObj()
{
	static class URigVMNativized* Default = nullptr;

	if (!Default)
		Default = static_cast<URigVMNativized*>(URigVMNativized::StaticClass()->DefaultObject);

	return Default;
}

}


