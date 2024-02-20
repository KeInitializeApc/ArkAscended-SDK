#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// Class AudioCapture.AudioCapture
class UAudioCapture : public UAudioGenerator
{
public:
	uint8                                        Pad_1729[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioCapture* GetDefaultObj();

	void StopCapturingAudio();
	void StartCapturingAudio();
	void IsCapturingAudio(bool ReturnValue);
	struct FAudioCaptureDeviceInfo GetAudioCaptureDeviceInfo(bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AudioCapture.AudioCaptureFunctionLibrary
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioCaptureFunctionLibrary* GetDefaultObj();

	void CreateAudioCapture(class UAudioCapture* ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class AudioCapture.AudioCaptureBlueprintLibrary
class UAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioCaptureBlueprintLibrary* GetDefaultObj();

	FDelegateProperty_ GetAvailableAudioInputDevices();
	struct FAudioInputDeviceInfo Conv_AudioInputDeviceInfoToString(const class FString& ReturnValue);
};

// 0xC0 (0x880 - 0x7C0)
// Class AudioCapture.AudioCaptureComponent
class UAudioCaptureComponent : public USynthComponent
{
public:
	int32                                        JitterLatencyFrames;                               // 0x7C0(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1735[0xBC];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioCaptureComponent* GetDefaultObj();

};

}


