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
	bool                                         AllowNonStandardCodecs;                            // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         LowLatency;                                        // 0x29(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         NativeAudioOut;                                    // 0x2A(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         HardwareAcceleratedVideoDecoding;                  // 0x2B(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_254B[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWmfMediaSettings* GetDefaultObj();

};

}


