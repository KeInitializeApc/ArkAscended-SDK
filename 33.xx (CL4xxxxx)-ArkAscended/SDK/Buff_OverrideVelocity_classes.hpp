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
	double                                       MaxNewFallVelocity;                                // 0xB78(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bPreventDefaultFallZVelocity;                      // 0xB80(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_OverrideVelocity_C* GetDefaultObj();

	class AActor* BPDeactivated(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess);
	bool BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* Result, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_SelectVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, double* CallFunc_Dot_VectorVector_ReturnValue, double* CallFunc_Multiply_VectorFloat_B_ImplicitCast);
};

}


