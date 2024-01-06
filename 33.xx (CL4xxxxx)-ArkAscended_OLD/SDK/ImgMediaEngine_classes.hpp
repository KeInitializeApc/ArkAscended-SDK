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
	float                                        LODBias;                                           // 0xB8(0x4)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, DuplicateTransient)
	uint8                                        Pad_1C31[0x24];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UImgMediaPlaybackComponent* GetDefaultObj();

};

}


