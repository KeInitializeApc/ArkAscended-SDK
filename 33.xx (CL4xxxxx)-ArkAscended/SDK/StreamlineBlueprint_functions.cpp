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
// enum class EUStreamlineFeature     Feature                                                          (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// enum class EUStreamlineFeatureSupportReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUStreamlineFeatureSupport UStreamlineLibrary::QueryStreamlineFeatureSupport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibrary", "QueryStreamlineFeatureSupport");

	Params::UStreamlineLibrary_QueryStreamlineFeatureSupport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibrary.IsStreamlineFeatureSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeature     Feature                                                          (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UStreamlineLibrary::IsStreamlineFeatureSupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibrary", "IsStreamlineFeatureSupported");

	Params::UStreamlineLibrary_IsStreamlineFeatureSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibrary.GetStreamlineFeatureInformation
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeature     Feature                                                          (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FStreamlineFeatureRequirementsReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FStreamlineFeatureRequirements UStreamlineLibrary::GetStreamlineFeatureInformation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibrary", "GetStreamlineFeatureInformation");

	Params::UStreamlineLibrary_GetStreamlineFeatureInformation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibrary.BreakStreamlineFeatureRequirements
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeatureRequirementsFlagsRequirements                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// bool                               D3D11Supported                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               D3D12Supported                                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               VulkanSupported                                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               VSyncOffRequired                                                 (Edit, Net, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               HardwareSchedulingRequired                                       (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

bool UStreamlineLibrary::BreakStreamlineFeatureRequirements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibrary", "BreakStreamlineFeatureRequirements");

	Params::UStreamlineLibrary_BreakStreamlineFeatureRequirements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// enum class EUStreamlineDLSSGMode   DLSSGMode                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EUStreamlineDLSSGMode UStreamlineLibraryDLSSG::SetDLSSGMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "SetDLSSGMode");

	Params::UStreamlineLibraryDLSSG_SetDLSSGMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.QueryDLSSGSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeatureSupportReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUStreamlineFeatureSupport UStreamlineLibraryDLSSG::QueryDLSSGSupport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "QueryDLSSGSupport");

	Params::UStreamlineLibraryDLSSG_QueryDLSSGSupport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UStreamlineLibraryDLSSG::IsDLSSGSupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "IsDLSSGSupported");

	Params::UStreamlineLibraryDLSSG_IsDLSSGSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.IsDLSSGModeSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGMode   DLSSGMode                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UStreamlineLibraryDLSSG::IsDLSSGModeSupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "IsDLSSGModeSupported");

	Params::UStreamlineLibraryDLSSG_IsDLSSGModeSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetSupportedDLSSGModes
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EUStreamlineDLSSGMode>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<enum class EUStreamlineDLSSGMode> UStreamlineLibraryDLSSG::GetSupportedDLSSGModes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "GetSupportedDLSSGModes");

	Params::UStreamlineLibraryDLSSG_GetSupportedDLSSGModes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGMode   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUStreamlineDLSSGMode UStreamlineLibraryDLSSG::GetDLSSGMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "GetDLSSGMode");

	Params::UStreamlineLibraryDLSSG_GetDLSSGMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDLSSGFrameTiming
// (Final, RequiredAPI, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              FrameRateInHertz                                                 (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              FramesPresented                                                  (ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

int32 UStreamlineLibraryDLSSG::GetDLSSGFrameTiming()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "GetDLSSGFrameTiming");

	Params::UStreamlineLibraryDLSSG_GetDLSSGFrameTiming_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryDLSSG.GetDefaultDLSSGMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineDLSSGMode   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUStreamlineDLSSGMode UStreamlineLibraryDLSSG::GetDefaultDLSSGMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryDLSSG", "GetDefaultDLSSGMode");

	Params::UStreamlineLibraryDLSSG_GetDefaultDLSSGMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// enum class EUStreamlineReflexMode  Mode                                                             (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)

void UStreamlineLibraryReflex::SetReflexMode(enum class EUStreamlineReflexMode* Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "SetReflexMode");

	Params::UStreamlineLibraryReflex_SetReflexMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Mode != nullptr)
		*Mode = Parms.Mode;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.QueryReflexSupport
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineFeatureSupportReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUStreamlineFeatureSupport UStreamlineLibraryReflex::QueryReflexSupport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "QueryReflexSupport");

	Params::UStreamlineLibraryReflex_QueryReflexSupport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.IsReflexSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UStreamlineLibraryReflex::IsReflexSupported()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "IsReflexSupported");

	Params::UStreamlineLibraryReflex_IsReflexSupported_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetRenderLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UStreamlineLibraryReflex::GetRenderLatencyInMs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetRenderLatencyInMs");

	Params::UStreamlineLibraryReflex_GetRenderLatencyInMs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineReflexMode  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUStreamlineReflexMode UStreamlineLibraryReflex::GetReflexMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetReflexMode");

	Params::UStreamlineLibraryReflex_GetReflexMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameToRenderLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UStreamlineLibraryReflex::GetGameToRenderLatencyInMs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetGameToRenderLatencyInMs");

	Params::UStreamlineLibraryReflex_GetGameToRenderLatencyInMs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetGameLatencyInMs
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UStreamlineLibraryReflex::GetGameLatencyInMs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetGameLatencyInMs");

	Params::UStreamlineLibraryReflex_GetGameLatencyInMs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StreamlineBlueprint.StreamlineLibraryReflex.GetDefaultReflexMode
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EUStreamlineReflexMode  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUStreamlineReflexMode UStreamlineLibraryReflex::GetDefaultReflexMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamlineLibraryReflex", "GetDefaultReflexMode");

	Params::UStreamlineLibraryReflex_GetDefaultReflexMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


