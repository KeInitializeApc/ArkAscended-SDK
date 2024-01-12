#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xD0 - 0x88)
// Class ImgMedia.ImgMediaSource
class UImgMediaSource : public UBaseMediaSource
{
public:
	bool                                         IsPathRelativeToProjectRoot;                       // 0x88(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_248E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            FrameRateOverride;                                 // 0x8C(0x8)(Edit, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_248F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ProxyOverride;                                     // 0x98(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate)
	bool                                         bFillGapsInSequence;                               // 0xA8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2490[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDirectoryPath                        SequencePath;                                      // 0xB0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2491[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImgMediaSource* GetDefaultObj();

	void SetTokenizedSequencePath(const class FString& Path);
	void SetSequencePath(const class FString& Path);
	float SetMipLevelDistance();
	class AActor* RemoveTargetObject();
	class AActor* RemoveGlobalCamera();
	class FString GetSequencePath();
	void GetProxies(TArray<class FString>* OutProxies);
	class AActor* AddTargetObject();
	class AActor* AddGlobalCamera();
};

}


