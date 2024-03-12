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
	uint8                                        Pad_1B13[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioCapture* GetDefaultObj();

	void StopCapturingAudio();
	void StartCapturingAudio();
	bool IsCapturingAudio();
	bool GetAudioCaptureDeviceInfo();
};

// 0x0 (0x28 - 0x28)
// Class AudioCapture.AudioCaptureFunctionLibrary
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioCaptureFunctionLibrary* GetDefaultObj();

	class UAudioCapture* CreateAudioCapture();
};

// 0x0 (0x28 - 0x28)
// Class AudioCapture.AudioCaptureBlueprintLibrary
class UAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAudioCaptureBlueprintLibrary* GetDefaultObj();

	FDelegateProperty_ GetAvailableAudioInputDevices(class UObject** WorldContextObject);
	class FString Conv_AudioInputDeviceInfoToString();
};

// 0xC0 (0x880 - 0x7C0)
// Class AudioCapture.AudioCaptureComponent
class UAudioCaptureComponent : public USynthComponent
{
public:
	int32                                        JitterLatencyFrames;                               // 0x7C0(0x4)(BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1B1D[0xBC];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAudioCaptureComponent* GetDefaultObj();

};

}


