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
	enum class Enum_FoleyCollection              FoleySoundToPlay;                                  // 0x40(0x1)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4576[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Volume_Multiplier;                                 // 0x48(0x8)(Edit, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayPlayerFoley_C* GetDefaultObj();

	class USoundBase* SelectSound(enum class Enum_FoleyCollection Temp_byte_Variable, class USoundBase* K2Node_Select_Default);
	class FString GetNotifyName(const class FString& CallFunc_Concat_StrStr_ReturnValue);
	float Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, struct FAnimNotifyEventReference* EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1);
};

}


