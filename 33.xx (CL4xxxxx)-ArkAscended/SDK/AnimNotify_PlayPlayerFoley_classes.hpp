#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x50 - 0x40)
// BlueprintGeneratedClass AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C
class UAnimNotify_PlayPlayerFoley_C : public UAnimNotify
{
public:
	enum class Enum_FoleyCollection              FoleySoundToPlay;                                  // 0x40(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_27E4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Volume_Multiplier;                                 // 0x48(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayPlayerFoley_C* GetDefaultObj();

	class USoundBase* SelectSound();
	void GetNotifyName(class FString* ReturnValue, class FString* CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue);
	float Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const struct FAnimNotifyEventReference& EventReference, bool* ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, class UAudioComponent** CallFunc_SpawnSoundAttached_ReturnValue);
};

}


