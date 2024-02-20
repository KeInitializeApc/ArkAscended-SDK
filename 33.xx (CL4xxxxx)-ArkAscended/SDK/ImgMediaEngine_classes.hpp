#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xE0 - 0xB8)
// Class ImgMediaEngine.ImgMediaPlaybackComponent
class UImgMediaPlaybackComponent : public UActorComponent
{
public:
	float                                        LODBias;                                           // 0xB8(0x4)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference)
	uint8                                        Pad_168A[0x24];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImgMediaPlaybackComponent* GetDefaultObj();

};

}


