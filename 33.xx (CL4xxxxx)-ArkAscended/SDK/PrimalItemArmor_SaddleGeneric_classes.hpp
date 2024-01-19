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
	double                                       SavedSaddleDurability;                             // 0xEC0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_SaddleGeneric_C* GetDefaultObj();

	float BPOverrideEquippedDurabilityPercentage(bool CallFunc_Greater_DoubleDouble_ReturnValue, double* CallFunc_Divide_DoubleFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float K2Node_FunctionResult_OutDurabilityPercentageValue_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void ResetSaddleDurabilityToSavedValue(bool CallFunc_Greater_DoubleDouble_ReturnValue, float K2Node_VariableSet_ItemDurability_ImplicitCast);
	void SaveSaddleDurability(double K2Node_VariableSet_SavedSaddleDurability_ImplicitCast);
	double BlueprintEquipped(bool* bIsFromSaveGame);
};

}


