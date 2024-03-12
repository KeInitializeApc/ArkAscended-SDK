#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0xB89 - 0xB68)
// BlueprintGeneratedClass Buff_OverrideVelocity.Buff_OverrideVelocity_C
class ABuff_OverrideVelocity_C : public APrimalBuff
{
public:
	struct FVector                               NewFallVelocity;                                   // 0xB68(0x18)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, GlobalConfig)
	double                                       MaxNewFallVelocity;                                // 0xB80(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, GlobalConfig, SubobjectReference)
	bool                                         bPreventDefaultFallZVelocity;                      // 0xB88(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_OverrideVelocity_C* GetDefaultObj();

	void BPDeactivated(class AActor** ForInstigator, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess);
	double BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, const struct FVector& Result, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_NewFallVelocity_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_BPPointPlaneProject_ReturnValue);
};

}


