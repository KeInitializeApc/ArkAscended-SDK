#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AudioLinkEngine.AudioLinkBlueprintInterface
class IAudioLinkBlueprintInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IAudioLinkBlueprintInterface* GetDefaultObj();

	void StopLink();
	void SetLinkSound(class USoundBase* NewSound);
	void PlayLink(float StartTime);
	bool IsLinkPlaying();
};

}


