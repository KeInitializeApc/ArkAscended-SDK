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
	bool                                         AllowNonStandardCodecs;                            // 0x28(0x1)(EditFixedSize, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         LowLatency;                                        // 0x29(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         NativeAudioOut;                                    // 0x2A(0x1)(ConstParm, BlueprintReadOnly, Net, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         HardwareAcceleratedVideoDecoding;                  // 0x2B(0x1)(Edit, Net, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1E28[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWmfMediaSettings* GetDefaultObj();

};

}


