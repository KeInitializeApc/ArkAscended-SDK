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
// float                              Sharpness                                                        (ExportObject, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void UDLSSLibrary::SetDLSSSharpness(float* Sharpness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "SetDLSSSharpness");

	Params::UDLSSLibrary_SetDLSSSharpness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Sharpness != nullptr)
		*Sharpness = Parms.Sharpness;

}


// Function DLSSBlueprint.DLSSLibrary.SetDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EUDLSSMode              DLSSMode                                                         (Edit, ConstParm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

class UObject* UDLSSLibrary::SetDLSSMode(enum class EUDLSSMode* DLSSMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "SetDLSSMode");

	Params::UDLSSLibrary_SetDLSSMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DLSSMode != nullptr)
		*DLSSMode = Parms.DLSSMode;

	return Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.QueryDLSSSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSSupport           ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UDLSSLibrary::QueryDLSSSupport(enum class EUDLSSSupport* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "QueryDLSSSupport");

	Params::UDLSSLibrary_QueryDLSSSupport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.QueryDLSSRRSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSSupport           ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UDLSSLibrary::QueryDLSSRRSupport(enum class EUDLSSSupport* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "QueryDLSSRRSupport");

	Params::UDLSSLibrary_QueryDLSSRRSupport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UDLSSLibrary::IsDLSSSupported(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSSupported");

	Params::UDLSSLibrary_IsDLSSSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSRRSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UDLSSLibrary::IsDLSSRRSupported(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSRRSupported");

	Params::UDLSSLibrary_IsDLSSRRSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSRREnabled
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UDLSSLibrary::IsDLSSRREnabled(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSRREnabled");

	Params::UDLSSLibrary_IsDLSSRREnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              DLSSMode                                                         (Edit, ConstParm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UDLSSLibrary::IsDLSSModeSupported(enum class EUDLSSMode* DLSSMode, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSModeSupported");

	Params::UDLSSLibrary_IsDLSSModeSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DLSSMode != nullptr)
		*DLSSMode = Parms.DLSSMode;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLSSEnabled
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UDLSSLibrary::IsDLSSEnabled(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLSSEnabled");

	Params::UDLSSLibrary_IsDLSSEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.IsDLAAEnabled
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UDLSSLibrary::IsDLAAEnabled(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "IsDLAAEnabled");

	Params::UDLSSLibrary_IsDLAAEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetSupportedDLSSModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EUDLSSMode>      ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UDLSSLibrary::GetSupportedDLSSModes(TArray<enum class EUDLSSMode>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetSupportedDLSSModes");

	Params::UDLSSLibrary_GetSupportedDLSSModes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSSharpness
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UDLSSLibrary::GetDLSSSharpness(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSSharpness");

	Params::UDLSSLibrary_GetDLSSSharpness_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSScreenPercentageRange
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              MinScreenPercentage                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              MaxScreenPercentage                                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UDLSSLibrary::GetDLSSScreenPercentageRange(float MinScreenPercentage, float MaxScreenPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSScreenPercentageRange");

	Params::UDLSSLibrary_GetDLSSScreenPercentageRange_Params Parms{};

	Parms.MinScreenPercentage = MinScreenPercentage;
	Parms.MaxScreenPercentage = MaxScreenPercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSRRMinimumDriverVersion
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              MinDriverVersionMajor                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              MinDriverVersionMinor                                            (Edit, ConstParm, ExportObject, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UDLSSLibrary::GetDLSSRRMinimumDriverVersion(int32 MinDriverVersionMajor, int32 MinDriverVersionMinor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSRRMinimumDriverVersion");

	Params::UDLSSLibrary_GetDLSSRRMinimumDriverVersion_Params Parms{};

	Parms.MinDriverVersionMajor = MinDriverVersionMajor;
	Parms.MinDriverVersionMinor = MinDriverVersionMinor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSModeInformation
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              DLSSMode                                                         (Edit, ConstParm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   ScreenResolution                                                 (ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate)
// bool                               bIsSupported                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              OptimalScreenPercentage                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsFixedScreenPercentage                                         (ConstParm, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              MinScreenPercentage                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              MaxScreenPercentage                                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              OptimalSharpness                                                 (Edit, ConstParm, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UDLSSLibrary::GetDLSSModeInformation(enum class EUDLSSMode* DLSSMode, const struct FVector2D& ScreenResolution, bool bIsSupported, float OptimalScreenPercentage, bool bIsFixedScreenPercentage, float MinScreenPercentage, float MaxScreenPercentage, float OptimalSharpness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSModeInformation");

	Params::UDLSSLibrary_GetDLSSModeInformation_Params Parms{};

	Parms.ScreenResolution = ScreenResolution;
	Parms.bIsSupported = bIsSupported;
	Parms.OptimalScreenPercentage = OptimalScreenPercentage;
	Parms.bIsFixedScreenPercentage = bIsFixedScreenPercentage;
	Parms.MinScreenPercentage = MinScreenPercentage;
	Parms.MaxScreenPercentage = MaxScreenPercentage;
	Parms.OptimalSharpness = OptimalSharpness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DLSSMode != nullptr)
		*DLSSMode = Parms.DLSSMode;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UDLSSLibrary::GetDLSSMode(enum class EUDLSSMode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSMode");

	Params::UDLSSLibrary_GetDLSSMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function DLSSBlueprint.DLSSLibrary.GetDLSSMinimumDriverVersion
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              MinDriverVersionMajor                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              MinDriverVersionMinor                                            (Edit, ConstParm, ExportObject, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)

void UDLSSLibrary::GetDLSSMinimumDriverVersion(int32 MinDriverVersionMajor, int32 MinDriverVersionMinor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDLSSMinimumDriverVersion");

	Params::UDLSSLibrary_GetDLSSMinimumDriverVersion_Params Parms{};

	Parms.MinDriverVersionMajor = MinDriverVersionMajor;
	Parms.MinDriverVersionMinor = MinDriverVersionMinor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DLSSBlueprint.DLSSLibrary.GetDefaultDLSSMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUDLSSMode              ReturnValue                                                      (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UDLSSLibrary::GetDefaultDLSSMode(enum class EUDLSSMode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DLSSLibrary", "GetDefaultDLSSMode");

	Params::UDLSSLibrary_GetDefaultDLSSMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

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

