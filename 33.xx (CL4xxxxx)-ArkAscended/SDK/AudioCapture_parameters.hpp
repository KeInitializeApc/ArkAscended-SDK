#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function AudioCapture.AudioCapture.IsCapturingAudio
struct UAudioCapture_IsCapturingAudio_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
struct UAudioCapture_GetAudioCaptureDeviceInfo_Params
{
public:
	struct FAudioCaptureDeviceInfo               OutInfo;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x10(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_1727[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
struct UAudioCaptureFunctionLibrary_CreateAudioCapture_Params
{
public:
	class UAudioCapture*                         ReturnValue;                                       // 0x0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices
struct UAudioCaptureBlueprintLibrary_GetAvailableAudioInputDevices_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	FDelegateProperty_                           OnObtainDevicesEvent;                              // 0x8(0x10)(Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString
struct UAudioCaptureBlueprintLibrary_Conv_AudioInputDeviceInfoToString_Params
{
public:
	struct FAudioInputDeviceInfo                 Info;                                              // 0x0(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm)
	class FString                                ReturnValue;                                       // 0x30(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

}
}


