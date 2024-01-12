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
	enum class Enum_VoiceCollectionLine          VoiceLineSelection;                                // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_4142[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Volume_Multiplier;                                 // 0x44(0x4)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayPlayerVO_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_Concat_StrStr_ReturnValue);
	class UAudioComponent* Received_Notify(class UAnimSequenceBase* Animation, class AActor** CallFunc_GetOwner_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, enum class Enum_VoiceCollectionLine Temp_byte_Variable, class USoundBase** K2Node_Select_Default);
};

}


