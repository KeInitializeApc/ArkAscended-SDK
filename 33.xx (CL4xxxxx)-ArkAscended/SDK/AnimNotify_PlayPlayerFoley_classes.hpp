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
	enum class Enum_FoleyCollection              FoleySoundToPlay;                                  // 0x40(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4809[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Volume_Multiplier;                                 // 0x48(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UAnimNotify_PlayPlayerFoley_C* GetDefaultObj();

	enum class Enum_FoleyCollection SelectSound(class USoundBase* K2Node_Select_Default);
	class FString GetNotifyName(const class FString& ReturnValue);
	float Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference* EventReference, bool ReturnValue, class UPrimalInventoryComponent** CallFunc_GetComponentByClass_ReturnValue);
};

}


