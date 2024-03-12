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
	enum class Enum_VoiceCollectionLine          VoiceLineSelection;                                // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2EEA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Volume_Multiplier;                                 // 0x44(0x4)(Edit, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayPlayerVO_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_Concat_StrStr_ReturnValue);
	class UAudioComponent* Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, struct FAnimNotifyEventReference* EventReference, class UPDA_VoiceCollection_C* VoiceCollection, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool* K2Node_DynamicCast_bSuccess, class UPDA_VoiceCollection_C* K2Node_DynamicCast_AsPDA_Voice_Collection, bool* K2Node_DynamicCast_bSuccess_1, enum class Enum_VoiceCollectionLine Temp_byte_Variable, class USoundBase* K2Node_Select_Default);
};

}


