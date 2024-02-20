#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x68 - 0x28)
// Class ImgMediaFactory.ImgMediaSettings
class UImgMediaSettings : public UObject
{
public:
	struct FFrameRate                            DefaultFrameRate;                                  // 0x28(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         BandwidthThrottlingEnabled;                        // 0x30(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16BF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CacheBehindPercentage;                             // 0x34(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        CacheSizeGB;                                       // 0x38(0x4)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        CacheThreads;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	int32                                        CacheThreadStackSizeKB;                            // 0x40(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	float                                        GlobalCacheSizeGB;                                 // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         UseGlobalCache;                                    // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16C6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint32                                       ExrDecoderThreads;                                 // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	class FString                                DefaultProxy;                                      // 0x50(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	bool                                         UseDefaultProxy;                                   // 0x60(0x1)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_16C7[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImgMediaSettings* GetDefaultObj();

};

}


