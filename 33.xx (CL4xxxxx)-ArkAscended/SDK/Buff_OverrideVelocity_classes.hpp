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
	struct FVector                               NewFallVelocity;                                   // 0xB60(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	double                                       MaxNewFallVelocity;                                // 0xB78(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bPreventDefaultFallZVelocity;                      // 0xB80(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_OverrideVelocity_C* GetDefaultObj();

	bool BPDeactivated(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character);
	bool BPOverrideCharacterNewFallVelocity(const struct FVector& Gravity, const struct FVector& ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue_1, double* CallFunc_Dot_VectorVector_ReturnValue, double* CallFunc_Multiply_VectorFloat_B_ImplicitCast);
};

}


