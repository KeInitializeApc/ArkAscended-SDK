#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x48 - 0x40)
// BlueprintGeneratedClass AnimNotify_PlayPlayerVO.AnimNotify_PlayPlayerVO_C
class UAnimNotify_PlayPlayerVO_C : public UAnimNotify
{
public:
	enum class Enum_VoiceCollectionLine          VoiceLineSelection;                                // 0x40(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_39EB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Volume_Multiplier;                                 // 0x44(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayPlayerVO_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& ReturnValue);
	class UAudioComponent* Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference* EventReference, bool ReturnValue, class USoundBase* K2Node_Select_Default);
};

}


