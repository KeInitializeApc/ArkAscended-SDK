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
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

void UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(class APlayerController** PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "SetEyeTrackedPlayer");

	Params::UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Function EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FEyeTrackerStereoGazeData   OutGazeData                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UEyeTrackerFunctionLibrary::GetStereoGazeData(struct FEyeTrackerStereoGazeData* OutGazeData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "GetStereoGazeData");

	Params::UEyeTrackerFunctionLibrary_GetStereoGazeData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutGazeData != nullptr)
		*OutGazeData = std::move(Parms.OutGazeData);

}


// Function EyeTracker.EyeTrackerFunctionLibrary.GetGazeData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEyeTrackerGazeData         OutGazeData                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UEyeTrackerFunctionLibrary::GetGazeData(struct FEyeTrackerGazeData* OutGazeData, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyeTrackerFunctionLibrary", "GetGazeData");

	Params::UEyeTrackerFunctionLibrary_GetGazeData_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutGazeData != nullptr)
		*OutGazeData = std::move(Parms.OutGazeData);

}

}


