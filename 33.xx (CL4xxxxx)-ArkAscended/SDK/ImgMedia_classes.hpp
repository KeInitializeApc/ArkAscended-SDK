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
	bool                                         IsPathRelativeToProjectRoot;                       // 0x88(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A6A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            FrameRateOverride;                                 // 0x8C(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A6B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ProxyOverride;                                     // 0x98(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm)
	bool                                         bFillGapsInSequence;                               // 0xA8(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A6E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDirectoryPath                        SequencePath;                                      // 0xB0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A6F[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImgMediaSource* GetDefaultObj();

	class FString SetTokenizedSequencePath();
	class FString SetSequencePath();
	float SetMipLevelDistance();
	void RemoveTargetObject(class AActor** InActor);
	void RemoveGlobalCamera(class AActor** InActor);
	class FString GetSequencePath();
	void GetProxies(const TArray<class FString>& OutProxies);
	void AddTargetObject(class AActor** InActor);
	void AddGlobalCamera(class AActor** InActor);
};

}


