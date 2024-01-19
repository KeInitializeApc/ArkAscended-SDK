#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EyeTracker.EyeTrackerFunctionLibrary
// (None)

class UClass* UEyeTrackerFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EyeTrackerFunctionLibrary");

	return Clss;
}


// EyeTrackerFunctionLibrary EyeTracker.Default__EyeTrackerFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UEyeTrackerFunctionLibrary* UEyeTrackerFunctionLibrary::GetDefaultObj()
{
	static class UEyeTrackerFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UEyeTrackerFunctionLibrary*>(UEyeTrackerFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

class APlayerController* UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "SetEyeTrackedPlayer");

	Params::UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "IsStereoGazeDataAvailable");

	Params::UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UEyeTrackerFunctionLibrary::IsEyeTrackerConnected(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "IsEyeTrackerConnected");

	Params::UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEyeTrackerStereoGazeData   OutGazeData                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UEyeTrackerFunctionLibrary::GetStereoGazeData(const struct FEyeTrackerStereoGazeData& OutGazeData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "GetStereoGazeData");

	Params::UEyeTrackerFunctionLibrary_GetStereoGazeData_Params Parms{};

	Parms.OutGazeData = OutGazeData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEyeTrackerGazeData         OutGazeData                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UEyeTrackerFunctionLibrary::GetGazeData(const struct FEyeTrackerGazeData& OutGazeData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "GetGazeData");

	Params::UEyeTrackerFunctionLibrary_GetGazeData_Params Parms{};

	Parms.OutGazeData = OutGazeData;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


