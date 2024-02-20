#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xEE0 - 0xED8)
// BlueprintGeneratedClass PrimalItemArmor_Shield.PrimalItemArmor_Shield_C
class UPrimalItemArmor_Shield_C : public UPrimalItemArmorGeneric_C
{
public:
	class UParticleSystem*                       ShieldHitImpactFX;                                 // 0xED8(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Shield_C* GetDefaultObj();

	double BPClientHandleItemNetExecCommand(bool K2Node_SwitchName_CmpSuccess, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	float PlayHitShieldEffect(bool LocalOnly, const struct FVector& FromLoc, bool* Temp_bool_Variable, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, bool* CallFunc_IsValid_ReturnValue);
	bool HandleShieldDamageBlocking(float* DamageIn, struct FDamageEvent* DamageEvent, struct FVector* HitPoint, float ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
};

}


