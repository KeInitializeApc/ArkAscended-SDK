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
// class FName                        InEventName                                                      (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName URigVMHost::SupportsEvent(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SupportsEvent");

	Params::URigVMHost_SupportsEvent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.SetVariableFromString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InVariableName                                                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString URigVMHost::SetVariableFromString(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "SetVariableFromString");

	Params::URigVMHost_SetVariableFromString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.SetFramesPerSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFramesPerSecond                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              InAbsoluteTime                                                   (Edit, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               InSetDeltaTimeZero                                               (Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              InAbsoluteTime                                                   (Edit, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class FName                        InEventName                                                      (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              InEventIndex                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class FName                        InEventName                                                      (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName URigVMHost::RemoveRunOnceEvent(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "RemoveRunOnceEvent");

	Params::URigVMHost_RemoveRunOnceEvent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.GetVM
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class URigVM*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigVMHost::GetVM(class URigVM* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetVM");

	Params::URigVMHost_GetVM_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetVariableType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InVariableName                                                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName URigVMHost::GetVariableType(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetVariableType");

	Params::URigVMHost_GetVariableType_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.GetVariableAsString
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InVariableName                                                   (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName URigVMHost::GetVariableAsString(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetVariableAsString");

	Params::URigVMHost_GetVariableAsString_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.GetSupportedEvents
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigVMHost::GetSupportedEvents(const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetSupportedEvents");

	Params::URigVMHost_GetSupportedEvents_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetScriptAccessibleVariables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigVMHost::GetScriptAccessibleVariables(const TArray<class FName>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetScriptAccessibleVariables");

	Params::URigVMHost_GetScriptAccessibleVariables_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetDeltaTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigVMHost::GetDeltaTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetDeltaTime");

	Params::URigVMHost_GetDeltaTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetCurrentFramesPerSecond
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigVMHost::GetCurrentFramesPerSecond(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetCurrentFramesPerSecond");

	Params::URigVMHost_GetCurrentFramesPerSecond_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.GetAbsoluteTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigVMHost::GetAbsoluteTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "GetAbsoluteTime");

	Params::URigVMHost_GetAbsoluteTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMHost.FindRigVMHosts
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Outer                                                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
// class UClass*                      OptionalClass                                                    (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class URigVMHost*>          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* URigVMHost::FindRigVMHosts(class UObject* Outer, const TArray<class URigVMHost*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "FindRigVMHosts");

	Params::URigVMHost_FindRigVMHosts_Params Parms{};

	Parms.Outer = Outer;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.ExecuteEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEventName                                                      (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName URigVMHost::ExecuteEvent(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "ExecuteEvent");

	Params::URigVMHost_ExecuteEvent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.Execute
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEventName                                                      (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName URigVMHost::Execute(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "Execute");

	Params::URigVMHost_Execute_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVMHost.CanExecute
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigVMHost::CanExecute(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMHost", "CanExecute");

	Params::URigVMHost_CanExecute_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigVMUserWorkflowOptions::RequiresDialog(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "RequiresDialog");

	Params::URigVMUserWorkflowOptions_RequiresDialog_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVMUserWorkflowOptions.ReportWarning
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InMessage                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

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
// class FString                      InMessage                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

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
// class FString                      InMessage                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigVMUserWorkflowOptions::IsValid(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVMUserWorkflowOptions", "IsValid");

	Params::URigVMUserWorkflowOptions_IsValid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// struct FVector2D                   InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// struct FVector                     InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// struct FTransform                  InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// class FString                      InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// struct FQuat                       InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// class FName                        InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// double                             InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

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
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// bool                               InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

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
// struct FRigVMStatistics            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URigVM::GetStatistics(const struct FRigVMStatistics& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetStatistics");

	Params::URigVM_GetStatistics_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function RigVM.RigVM.GetRigVMFunctionName
// (Native, Public, Const)
// Parameters:
// int32                              InFunctionIndex                                                  (Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigVM::GetRigVMFunctionName(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetRigVMFunctionName");

	Params::URigVM_GetRigVMFunctionName_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueVector2D
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigVM::GetParameterValueVector2D(class FName InParameterName, const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueVector2D");

	Params::URigVM_GetParameterValueVector2D_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueVector
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigVM::GetParameterValueVector(class FName InParameterName, const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueVector");

	Params::URigVM_GetParameterValueVector_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueTransform
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FTransform                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigVM::GetParameterValueTransform(class FName InParameterName, const struct FTransform& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueTransform");

	Params::URigVM_GetParameterValueTransform_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueString
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigVM::GetParameterValueString(class FName InParameterName, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueString");

	Params::URigVM_GetParameterValueString_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueQuat
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// struct FQuat                       ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigVM::GetParameterValueQuat(class FName InParameterName, const struct FQuat& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueQuat");

	Params::URigVM_GetParameterValueQuat_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueName
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigVM::GetParameterValueName(class FName InParameterName, class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueName");

	Params::URigVM_GetParameterValueName_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueInt
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigVM::GetParameterValueInt(class FName InParameterName, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueInt");

	Params::URigVM_GetParameterValueInt_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueFloat
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigVM::GetParameterValueFloat(class FName InParameterName, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueFloat");

	Params::URigVM_GetParameterValueFloat_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueDouble
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigVM::GetParameterValueDouble(class FName InParameterName, double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueDouble");

	Params::URigVM_GetParameterValueDouble_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.GetParameterValueBool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InParameterName                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              InArrayIndex                                                     (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 URigVM::GetParameterValueBool(class FName InParameterName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "GetParameterValueBool");

	Params::URigVM_GetParameterValueBool_Params Parms{};

	Parms.InParameterName = InParameterName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.Execute
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        InEntryName                                                      (Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName URigVM::Execute(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "Execute");

	Params::URigVM_Execute_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function RigVM.RigVM.AddRigVMFunction
// (Native, Public, HasOutParams)
// Parameters:
// class UScriptStruct*               InRigVMStruct                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// class FName                        InMethodName                                                     (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName URigVM::AddRigVMFunction(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RigVM", "AddRigVMFunction");

	Params::URigVM_AddRigVMFunction_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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


