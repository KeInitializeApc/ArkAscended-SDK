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
	bool                                         AllowNonStandardCodecs;                            // 0x28(0x1)(Edit, ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         LowLatency;                                        // 0x29(0x1)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         NativeAudioOut;                                    // 0x2A(0x1)(Edit, BlueprintVisible, Parm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         HardwareAcceleratedVideoDecoding;                  // 0x2B(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_23CD[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UWmfMediaSettings* GetDefaultObj();

};

}


