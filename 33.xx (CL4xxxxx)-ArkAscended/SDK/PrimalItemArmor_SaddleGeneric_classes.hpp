#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xEC8 - 0xEB8)
// BlueprintGeneratedClass PrimalItemArmor_SaddleGeneric.PrimalItemArmor_SaddleGeneric_C
class UPrimalItemArmor_SaddleGeneric_C : public UPrimalItemArmorGeneric_C
{
public:
	double                                       LastTorchDurabilityLossTime;                       // 0xEB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	double                                       SavedSaddleDurability;                             // 0xEC0(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleGeneric_C* GetDefaultObj();

	float BPOverrideEquippedDurabilityPercentage(float OutDurabilityPercentageValue, double* CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	float ResetSaddleDurabilityToSavedValue();
	double SaveSaddleDurability();
	double BlueprintEquipped(bool bIsFromSaveGame, bool* CallFunc_IsValid_ReturnValue);
};

}


