#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0xB81 - 0xB60)
// BlueprintGeneratedClass Buff_OverrideVelocity.Buff_OverrideVelocity_C
class ABuff_OverrideVelocity_C : public APrimalBuff
{
public:
	struct FVector                               NewFallVelocity;                                   // 0xB60(0x18)(EditFixedSize, Parm, ReturnParm, Transient, Config, GlobalConfig)
	double                                       MaxNewFallVelocity;                                // 0xB78(0x8)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bPreventDefaultFallZVelocity;                      // 0xB80(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_OverrideVelocity_C* GetDefaultObj();

	bool BPDeactivated(class AActor* ForInstigator, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character);
	bool BPOverrideCharacterNewFallVelocity(struct FVector* InitialVelocity, struct FVector* ReturnValue, struct FVector* Result, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_NewFallVelocity_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_BPPointPlaneProject_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double* CallFunc_Multiply_VectorFloat_B_ImplicitCast);
};

}

