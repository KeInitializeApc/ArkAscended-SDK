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
	bool                                         IsPathRelativeToProjectRoot;                       // 0x88(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_167B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            FrameRateOverride;                                 // 0x8C(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_167D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ProxyOverride;                                     // 0x98(0x10)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate)
	bool                                         bFillGapsInSequence;                               // 0xA8(0x1)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_167F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDirectoryPath                        SequencePath;                                      // 0xB0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1680[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImgMediaSource* GetDefaultObj();

	void SetTokenizedSequencePath(class FString* Path);
	void SetSequencePath(class FString* Path);
	float SetMipLevelDistance();
	class AActor* RemoveTargetObject();
	class AActor* RemoveGlobalCamera();
	void GetSequencePath(const class FString& ReturnValue);
	void GetProxies(TArray<class FString>* OutProxies);
	class AActor* AddTargetObject();
	class AActor* AddGlobalCamera();
};

}


