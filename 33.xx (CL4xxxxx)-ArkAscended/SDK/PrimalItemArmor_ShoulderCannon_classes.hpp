#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0xF60 - 0xF49)
// BlueprintGeneratedClass PrimalItemArmor_ShoulderCannon.PrimalItemArmor_ShoulderCannon_C
class UPrimalItemArmor_ShoulderCannon_C : public UPrimalItemArmor_Base_Tek_C
{
public:
	uint8                                        Pad_57AC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     Player;                                            // 0xF50(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst)
	class ABuff_TekArmor_C*                      Buff;                                              // 0xF58(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_ShoulderCannon_C* GetDefaultObj();

	bool HasAmmoOrElement(bool* CallFunc_Greater_IntInt_ReturnValue);
	int32 ConsumeAmmo(int32* Amount, bool* CallFunc_UseItemOntoItem_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	class APrimalBuff* GetBuff(class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor, bool* K2Node_DynamicCast_bSuccess);
	class USkeletalMeshComponent* InitBuff();
	class USkeletalMeshComponent* BPAddedAttachments();
};

}


