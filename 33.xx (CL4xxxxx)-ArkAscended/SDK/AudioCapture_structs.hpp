#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct AudioCapture.AudioInputDeviceInfo
struct FAudioInputDeviceInfo
{
public:
	class FString                                DeviceName;                                        // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DeviceID;                                          // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor)
	int32                                        InputChannels;                                     // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PreferredSampleRate;                               // 0x24(0x4)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSupportsHardwareAEC : 1;                          // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_1736[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AudioCapture.AudioCaptureDeviceInfo
struct FAudioCaptureDeviceInfo
{
public:
	class FName                                  DeviceName;                                        // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumInputChannels;                                  // 0x8(0x4)(Edit, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SampleRate;                                        // 0xC(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, DuplicateTransient)
};

}


