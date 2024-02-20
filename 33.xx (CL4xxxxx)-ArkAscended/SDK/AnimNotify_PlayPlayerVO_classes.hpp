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
	enum class Enum_VoiceCollectionLine          VoiceLineSelection;                                // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, SubobjectReference)
	uint8                                        Pad_31FE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Volume_Multiplier;                                 // 0x44(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayPlayerVO_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& ReturnValue);
	class UAudioComponent* Received_Notify(struct FAnimNotifyEventReference* EventReference, bool ReturnValue, class UPDA_VoiceCollection_C* VoiceCollection, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, class UPDA_VoiceCollection_C* K2Node_DynamicCast_AsPDA_Voice_Collection, enum class Enum_VoiceCollectionLine* Temp_byte_Variable, class USoundBase** K2Node_Select_Default);
};

}


