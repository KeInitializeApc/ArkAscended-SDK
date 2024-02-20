#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class WmfMediaFactory.WmfMediaSettings
class UWmfMediaSettings : public UObject
{
public:
	bool                                         AllowNonStandardCodecs;                            // 0x28(0x1)(EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         LowLatency;                                        // 0x29(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         NativeAudioOut;                                    // 0x2A(0x1)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         HardwareAcceleratedVideoDecoding;                  // 0x2B(0x1)(Edit, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16EB[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWmfMediaSettings* GetDefaultObj();

};

}


