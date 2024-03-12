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
// float                              Sharpness                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class EUDLSSMode              DLSSMode                                                         (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

enum class EUDLSSMode UDLSSLibrary::SetDLSSMode(class UObject** WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "SetDLSSMode");

	Params::UDLSSLibrary_SetDLSSMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WorldContextObject != nullptr)
		*WorldContextObject = Parms.WorldContextObject;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSSupport           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// enum class EUDLSSSupport           ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// enum class EUDLSSMode              DLSSMode                                                         (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// TArray<enum class EUDLSSMode>      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// float                              MinScreenPercentage                                              (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MaxScreenPercentage                                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UDLSSLibrary::GetDLSSScreenPercentageRange(float* MaxScreenPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSScreenPercentageRange");

	Params::UDLSSLibrary_GetDLSSScreenPercentageRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = Parms.MaxScreenPercentage;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              MinDriverVersionMajor                                            (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinDriverVersionMinor                                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UDLSSLibrary::GetDLSSRRMinimumDriverVersion(int32* MinDriverVersionMajor, int32* MinDriverVersionMinor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSRRMinimumDriverVersion");

	Params::UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MinDriverVersionMajor != nullptr)
		*MinDriverVersionMajor = Parms.MinDriverVersionMajor;

	if (MinDriverVersionMinor != nullptr)
		*MinDriverVersionMinor = Parms.MinDriverVersionMinor;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              DLSSMode                                                         (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   ScreenResolution                                                 (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate)
// bool                               bIsSupported                                                     (Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              OptimalScreenPercentage                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bIsFixedScreenPercentage                                         (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MinScreenPercentage                                              (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              MaxScreenPercentage                                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              OptimalSharpness                                                 (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float UDLSSLibrary::GetDLSSModeInformation(const struct FVector2D& ScreenResolution, float* MaxScreenPercentage, float* OptimalSharpness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSModeInformation");

	Params::UDLSSLibrary_GetDLSSModeInformation_Params Parms{};

	Parms.ScreenResolution = ScreenResolution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MaxScreenPercentage != nullptr)
		*MaxScreenPercentage = Parms.MaxScreenPercentage;

	if (OptimalSharpness != nullptr)
		*OptimalSharpness = Parms.OptimalSharpness;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              MinDriverVersionMajor                                            (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              MinDriverVersionMinor                                            (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32* MinDriverVersionMajor, int32* MinDriverVersionMinor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSMinimumDriverVersion");

	Params::UDLSSLibrary_GetDLSSMinimumDriverVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MinDriverVersionMajor != nullptr)
		*MinDriverVersionMajor = Parms.MinDriverVersionMajor;

	if (MinDriverVersionMinor != nullptr)
		*MinDriverVersionMinor = Parms.MinDriverVersionMinor;

}


// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               bEnabled                                                         (Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)

void UDLSSLibrary::EnableDLSSRR(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "EnableDLSSRR");

	Params::UDLSSLibrary_EnableDLSSRR_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.EnableDLSS
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)

void UDLSSLibrary::EnableDLSS(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "EnableDLSS");

	Params::UDLSSLibrary_EnableDLSS_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.EnableDLAA
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)

void UDLSSLibrary::EnableDLAA(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "EnableDLAA");

	Params::UDLSSLibrary_EnableDLAA_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


