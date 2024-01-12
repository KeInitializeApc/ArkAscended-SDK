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
	struct FFrameRate                            DefaultFrameRate;                                  // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         BandwidthThrottlingEnabled;                        // 0x30(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E62[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	float                                        CacheBehindPercentage;                             // 0x34(0x4)(Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        CacheSizeGB;                                       // 0x38(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CacheThreads;                                      // 0x3C(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        CacheThreadStackSizeKB;                            // 0x40(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        GlobalCacheSizeGB;                                 // 0x44(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         UseGlobalCache;                                    // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E64[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	uint32                                       ExrDecoderThreads;                                 // 0x4C(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	class FString                                DefaultProxy;                                      // 0x50(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         UseDefaultProxy;                                   // 0x60(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_E66[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImgMediaSettings* GetDefaultObj();

};

}


