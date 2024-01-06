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
	bool                                         IsPathRelativeToProjectRoot;                       // 0x88(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D25[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FFrameRate                            FrameRateOverride;                                 // 0x8C(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D26[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ProxyOverride;                                     // 0x98(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate)
	bool                                         bFillGapsInSequence;                               // 0xA8(0x1)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D28[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDirectoryPath                        SequencePath;                                      // 0xB0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D29[0x10];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImgMediaSource* GetDefaultObj();

	void SetTokenizedSequencePath(const class FString& Path);
	void SetSequencePath(const class FString& Path);
	void SetMipLevelDistance(float Distance);
	void RemoveTargetObject(class AActor* InActor);
	void RemoveGlobalCamera(class AActor* InActor);
	void GetSequencePath(class FString* ReturnValue);
	TArray<class FString> GetProxies();
	void AddTargetObject(class AActor* InActor);
	void AddGlobalCamera(class AActor* InActor);
};

}


