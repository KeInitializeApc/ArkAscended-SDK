#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StreamlineBlueprint.StreamlineLibrary
// (None)

class UClass* UStreamlineLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamlineLibrary");

	return Clss;
}


// StreamlineLibrary StreamlineBlueprint.Default__StreamlineLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamlineLibrary* UStreamlineLibrary::GetDefaultObj()
{
	static class UStreamlineLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamlineLibrary*>(UStreamlineLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function StreamlineBlueprint.StreamlineLibrary.QueryStreamlineFeatureSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeature     Feature                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// enum class EUStreamlineFeatureSupportReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibrary::QueryStreamlineFeatureSupport(enum class EUStreamlineFeature* Feature, enum class EUStreamlineFeatureSupport* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibrary", "QueryStreamlineFeatureSupport");

	Params::UStreamlineLibrary_QueryStreamlineFeatureSupport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Feature != nullptr)
		*Feature = Parms.Feature;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeature     Feature                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibrary::IsStreamlineFeatureSupported(enum class EUStreamlineFeature* Feature, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibrary", "IsStreamlineFeatureSupported");

	Params::UStreamlineLibrary_IsStreamlineFeatureSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Feature != nullptr)
		*Feature = Parms.Feature;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeature     Feature                                                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FStreamlineFeatureRequirementsReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibrary::GetStreamlineFeatureInformation(enum class EUStreamlineFeature* Feature, struct FStreamlineFeatureRequirements* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibrary", "GetStreamlineFeatureInformation");

	Params::UStreamlineLibrary_GetStreamlineFeatureInformation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Feature != nullptr)
		*Feature = Parms.Feature;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeatureRequirementsFlagsRequirements                                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               D3D11Supported                                                   (ConstParm, BlueprintVisible, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               D3D12Supported                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               VulkanSupported                                                  (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               VSyncOffRequired                                                 (BlueprintVisible, ExportObject, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               HardwareSchedulingRequired                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void UStreamlineLibrary::BreakStreamlineFeatureRequirements(enum class EUStreamlineFeatureRequirementsFlags* Requirements, bool* D3D11Supported, bool* D3D12Supported, bool* VulkanSupported, bool* VSyncOffRequired, bool* HardwareSchedulingRequired)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibrary", "BreakStreamlineFeatureRequirements");

	Params::UStreamlineLibrary_BreakStreamlineFeatureRequirements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Requirements != nullptr)
		*Requirements = Parms.Requirements;

	if (D3D11Supported != nullptr)
		*D3D11Supported = Parms.D3D11Supported;

	if (D3D12Supported != nullptr)
		*D3D12Supported = Parms.D3D12Supported;

	if (VulkanSupported != nullptr)
		*VulkanSupported = Parms.VulkanSupported;

	if (VSyncOffRequired != nullptr)
		*VSyncOffRequired = Parms.VSyncOffRequired;

	if (HardwareSchedulingRequired != nullptr)
		*HardwareSchedulingRequired = Parms.HardwareSchedulingRequired;

}


// Class StreamlineBlueprint.StreamlineLibraryDLSSG
// (None)

class UClass* UStreamlineLibraryDLSSG::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamlineLibraryDLSSG");

	return Clss;
}


// StreamlineLibraryDLSSG StreamlineBlueprint.Default__StreamlineLibraryDLSSG
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamlineLibraryDLSSG* UStreamlineLibraryDLSSG::GetDefaultObj()
{
	static class UStreamlineLibraryDLSSG* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamlineLibraryDLSSG*>(UStreamlineLibraryDLSSG::StaticClass()->DefaultObject);

	return Default;
}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.SetDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EUStreamlineDLSSGMode   DLSSGMode                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void UStreamlineLibraryDLSSG::SetDLSSGMode(enum class EUStreamlineDLSSGMode* DLSSGMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "SetDLSSGMode");

	Params::UStreamlineLibraryDLSSG_SetDLSSGMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DLSSGMode != nullptr)
		*DLSSGMode = Parms.DLSSGMode;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeatureSupportReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryDLSSG::QueryDLSSGSupport(enum class EUStreamlineFeatureSupport* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "QueryDLSSGSupport");

	Params::UStreamlineLibraryDLSSG_QueryDLSSGSupport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryDLSSG::IsDLSSGSupported(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "IsDLSSGSupported");

	Params::UStreamlineLibraryDLSSG_IsDLSSGSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGMode   DLSSGMode                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryDLSSG::IsDLSSGModeSupported(enum class EUStreamlineDLSSGMode* DLSSGMode, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "IsDLSSGModeSupported");

	Params::UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DLSSGMode != nullptr)
		*DLSSGMode = Parms.DLSSGMode;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EUStreamlineDLSSGMode>ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryDLSSG::GetSupportedDLSSGModes(TArray<enum class EUStreamlineDLSSGMode>* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "GetSupportedDLSSGModes");

	Params::UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGMode   ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryDLSSG::GetDLSSGMode(enum class EUStreamlineDLSSGMode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "GetDLSSGMode");

	Params::UStreamlineLibraryDLSSG_GetDLSSGMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              FrameRateInHertz                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              FramesPresented                                                  (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

void UStreamlineLibraryDLSSG::GetDLSSGFrameTiming(float* FrameRateInHertz, int32* FramesPresented)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "GetDLSSGFrameTiming");

	Params::UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FrameRateInHertz != nullptr)
		*FrameRateInHertz = Parms.FrameRateInHertz;

	if (FramesPresented != nullptr)
		*FramesPresented = Parms.FramesPresented;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGMode   ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryDLSSG::GetDefaultDLSSGMode(enum class EUStreamlineDLSSGMode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "GetDefaultDLSSGMode");

	Params::UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class StreamlineBlueprint.StreamlineLibraryReflex
// (None)

class UClass* UStreamlineLibraryReflex::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamlineLibraryReflex");

	return Clss;
}


// StreamlineLibraryReflex StreamlineBlueprint.Default__StreamlineLibraryReflex
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamlineLibraryReflex* UStreamlineLibraryReflex::GetDefaultObj()
{
	static class UStreamlineLibraryReflex* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamlineLibraryReflex*>(UStreamlineLibraryReflex::StaticClass()->DefaultObject);

	return Default;
}


// Function StreamlineBlueprint.StreamlineLibraryReflex.SetReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EUStreamlineReflexMode  Mode                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUStreamlineReflexMode UStreamlineLibraryReflex::SetReflexMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "SetReflexMode");

	Params::UStreamlineLibraryReflex_SetReflexMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeatureSupportReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryReflex::QueryReflexSupport(enum class EUStreamlineFeatureSupport* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "QueryReflexSupport");

	Params::UStreamlineLibraryReflex_QueryReflexSupport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryReflex::IsReflexSupported(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "IsReflexSupported");

	Params::UStreamlineLibraryReflex_IsReflexSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryReflex::GetRenderLatencyInMs(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetRenderLatencyInMs");

	Params::UStreamlineLibraryReflex_GetRenderLatencyInMs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineReflexMode  ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryReflex::GetReflexMode(enum class EUStreamlineReflexMode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetReflexMode");

	Params::UStreamlineLibraryReflex_GetReflexMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryReflex::GetGameToRenderLatencyInMs(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetGameToRenderLatencyInMs");

	Params::UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryReflex::GetGameLatencyInMs(float* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetGameLatencyInMs");

	Params::UStreamlineLibraryReflex_GetGameLatencyInMs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineReflexMode  ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryReflex::GetDefaultReflexMode(enum class EUStreamlineReflexMode* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetDefaultReflexMode");

	Params::UStreamlineLibraryReflex_GetDefaultReflexMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}

}


