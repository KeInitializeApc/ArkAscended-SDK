#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AudioCapture.AudioCapture
// (None)

class UClass* UAudioCapture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioCapture");

	return Clss;
}


// AudioCapture AudioCapture.Default__AudioCapture
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioCapture* UAudioCapture::GetDefaultObj()
{
	static class UAudioCapture* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioCapture*>(UAudioCapture::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioCapture.AudioCapture.StopCapturingAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAudioCapture::StopCapturingAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCapture", "StopCapturingAudio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AudioCapture.AudioCapture.StartCapturingAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAudioCapture::StartCapturingAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCapture", "StartCapturingAudio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function AudioCapture.AudioCapture.IsCapturingAudio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioCapture::IsCapturingAudio(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCapture", "IsCapturingAudio");

	Params::UAudioCapture_IsCapturingAudio_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAudioCaptureDeviceInfo     OutInfo                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioCapture::GetAudioCaptureDeviceInfo(const struct FAudioCaptureDeviceInfo& OutInfo, bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCapture", "GetAudioCaptureDeviceInfo");

	Params::UAudioCapture_GetAudioCaptureDeviceInfo_Params Parms{};

	Parms.OutInfo = OutInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AudioCapture.AudioCaptureFunctionLibrary
// (None)

class UClass* UAudioCaptureFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioCaptureFunctionLibrary");

	return Clss;
}


// AudioCaptureFunctionLibrary AudioCapture.Default__AudioCaptureFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioCaptureFunctionLibrary* UAudioCaptureFunctionLibrary::GetDefaultObj()
{
	static class UAudioCaptureFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioCaptureFunctionLibrary*>(UAudioCaptureFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAudioCapture*               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UAudioCaptureFunctionLibrary::CreateAudioCapture(class UAudioCapture** ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCaptureFunctionLibrary", "CreateAudioCapture");

	Params::UAudioCaptureFunctionLibrary_CreateAudioCapture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Class AudioCapture.AudioCaptureBlueprintLibrary
// (None)

class UClass* UAudioCaptureBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioCaptureBlueprintLibrary");

	return Clss;
}


// AudioCaptureBlueprintLibrary AudioCapture.Default__AudioCaptureBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioCaptureBlueprintLibrary* UAudioCaptureBlueprintLibrary::GetDefaultObj()
{
	static class UAudioCaptureBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioCaptureBlueprintLibrary*>(UAudioCaptureBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 OnObtainDevicesEvent                                             (Edit, ConstParm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

class UObject* UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices(FDelegateProperty_* OnObtainDevicesEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCaptureBlueprintLibrary", "GetAvailableAudioInputDevices");

	Params::UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OnObtainDevicesEvent != nullptr)
		*OnObtainDevicesEvent = Parms.OnObtainDevicesEvent;

	return Parms.ReturnValue;

}


// Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAudioInputDeviceInfo       Info                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAudioInputDeviceInfo UAudioCaptureBlueprintLibrary::Conv_AudioInputDeviceInfoToString(class FString* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioCaptureBlueprintLibrary", "Conv_AudioInputDeviceInfoToString");

	Params::UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	return Parms.ReturnValue;

}


// Class AudioCapture.AudioCaptureComponent
// (SceneComponent)

class UClass* UAudioCaptureComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioCaptureComponent");

	return Clss;
}


// AudioCaptureComponent AudioCapture.Default__AudioCaptureComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioCaptureComponent* UAudioCaptureComponent::GetDefaultObj()
{
	static class UAudioCaptureComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioCaptureComponent*>(UAudioCaptureComponent::StaticClass()->DefaultObject);

	return Default;
}

}


