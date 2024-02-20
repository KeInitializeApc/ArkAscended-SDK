#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xEE8 - 0xED8)
// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C
class UPrimalItemArmor_SaddleGeneric_C : public UPrimalItemArmorGeneric_C
{
public:
	double                                       LastTorchDurabilityLossTime;                       // 0xED8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	double                                       SavedSaddleDurability;                             // 0xEE0(0x8)(Net, OutParm, ReturnParm, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleGeneric_C* GetDefaultObj();

	double BPOverrideEquippedDurabilityPercentage(float OutDurabilityPercentageValue, float CallFunc_GetItemStatModifier_ReturnValue);
	float ResetSaddleDurabilityToSavedValue();
	double SaveSaddleDurability();
	double BlueprintEquipped(bool bIsFromSaveGame, bool* CallFunc_IsValid_ReturnValue);
};

}


