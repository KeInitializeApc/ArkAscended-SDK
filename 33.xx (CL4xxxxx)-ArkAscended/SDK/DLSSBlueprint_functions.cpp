#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DLSSBlueprint.DLSSLibrary
// (None)

class UClass* UDLSSLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DLSSLibrary");

	return Clss;
}


// DLSSLibrary DLSSBlueprint.Default__DLSSLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UDLSSLibrary* UDLSSLibrary::GetDefaultObj()
{
	static class UDLSSLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UDLSSLibrary*>(UDLSSLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function DLSSBlueprint.DLSSLibrary.SetDLSSSharpness
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                              Sharpness                                                        (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

float UDLSSLibrary::SetDLSSSharpness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "SetDLSSSharpness");

	Params::UDLSSLibrary_SetDLSSSharpness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EUDLSSMode              DLSSMode                                                         (ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EUDLSSMode UDLSSLibrary::SetDLSSMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "SetDLSSMode");

	Params::UDLSSLibrary_SetDLSSMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSSupport           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUDLSSSupport UDLSSLibrary::QueryDLSSSupport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "QueryDLSSSupport");

	Params::UDLSSLibrary_QueryDLSSSupport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSSupport           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUDLSSSupport UDLSSLibrary::QueryDLSSRRSupport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "QueryDLSSRRSupport");

	Params::UDLSSLibrary_QueryDLSSRRSupport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UDLSSLibrary::IsDLSSSupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSSupported");

	Params::UDLSSLibrary_IsDLSSSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UDLSSLibrary::IsDLSSRRSupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSRRSupported");

	Params::UDLSSLibrary_IsDLSSRRSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UDLSSLibrary::IsDLSSRREnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSRREnabled");

	Params::UDLSSLibrary_IsDLSSRREnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              DLSSMode                                                         (ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UDLSSLibrary::IsDLSSModeSupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSModeSupported");

	Params::UDLSSLibrary_IsDLSSModeSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UDLSSLibrary::IsDLSSEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSEnabled");

	Params::UDLSSLibrary_IsDLSSEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UDLSSLibrary::IsDLAAEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLAAEnabled");

	Params::UDLSSLibrary_IsDLAAEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EUDLSSMode>      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<enum class EUDLSSMode> UDLSSLibrary::GetSupportedDLSSModes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetSupportedDLSSModes");

	Params::UDLSSLibrary_GetSupportedDLSSModes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UDLSSLibrary::GetDLSSSharpness()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSSharpness");

	Params::UDLSSLibrary_GetDLSSSharpness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              MinScreenPercentage                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              MaxScreenPercentage                                              (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

float UDLSSLibrary::GetDLSSScreenPercentageRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSScreenPercentageRange");

	Params::UDLSSLibrary_GetDLSSScreenPercentageRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              MinDriverVersionMajor                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              MinDriverVersionMinor                                            (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

int32 UDLSSLibrary::GetDLSSRRMinimumDriverVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSRRMinimumDriverVersion");

	Params::UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              DLSSMode                                                         (ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   ScreenResolution                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor)
// bool                               bIsSupported                                                     (Edit, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              OptimalScreenPercentage                                          (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsFixedScreenPercentage                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              MinScreenPercentage                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              MaxScreenPercentage                                              (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// float                              OptimalSharpness                                                 (ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

float UDLSSLibrary::GetDLSSModeInformation(struct FVector2D* ScreenResolution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSModeInformation");

	Params::UDLSSLibrary_GetDLSSModeInformation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScreenResolution != nullptr)
		*ScreenResolution = std::move(Parms.ScreenResolution);

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUDLSSMode UDLSSLibrary::GetDLSSMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSMode");

	Params::UDLSSLibrary_GetDLSSMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              MinDriverVersionMajor                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              MinDriverVersionMinor                                            (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

int32 UDLSSLibrary::GetDLSSMinimumDriverVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSMinimumDriverVersion");

	Params::UDLSSLibrary_GetDLSSMinimumDriverVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUDLSSMode UDLSSLibrary::GetDefaultDLSSMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDefaultDLSSMode");

	Params::UDLSSLibrary_GetDefaultDLSSMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.EnableDLSSRR
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)

void UDLSSLibrary::EnableDLSSRR(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "EnableDLSSRR");

	Params::UDLSSLibrary_EnableDLSSRR_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function DLSSBlueprint.DLSSLibrary.EnableDLSS
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)

void UDLSSLibrary::EnableDLSS(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "EnableDLSS");

	Params::UDLSSLibrary_EnableDLSS_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function DLSSBlueprint.DLSSLibrary.EnableDLAA
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, EditConst, GlobalConfig)

void UDLSSLibrary::EnableDLAA(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "EnableDLAA");

	Params::UDLSSLibrary_EnableDLAA_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}

}


