#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x1409 - 0x13F8)
// BlueprintGeneratedClass SkeletalMeshComponent_CharacterSkin.SkeletalMeshComponent_CharacterSkin_C
class USkeletalMeshComponent_CharacterSkin_C : public USkeletalMeshComponent
{
public:
	uint8                                        Pad_29D1[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                BoneModiferContainer;                              // 0x1400(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bOverrideBoneModifers;                             // 0x1408(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class USkeletalMeshComponent_CharacterSkin_C* GetDefaultObj();

	void BPOnComponentDestroyed(class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess);
	float AddedAsPrimalItemAttachment(class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_DynamicCast_bSuccess_1);
};

}


