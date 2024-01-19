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
	struct FVector                               NewFallVelocity;                                   // 0xB60(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
	double                                       MaxNewFallVelocity;                                // 0xB78(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	bool                                         bPreventDefaultFallZVelocity;                      // 0xB80(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_OverrideVelocity_C* GetDefaultObj();

	bool BPDeactivated(class AActor** ForInstigator);
	double BPOverrideCharacterNewFallVelocity(const struct FVector& InitialVelocity, const struct FVector& ReturnValue, struct FVector* Result, struct FVector* CallFunc_NewFallVelocity_ReturnValue, struct FVector* CallFunc_SelectVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, struct FVector* CallFunc_BPPointPlaneProject_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue);
};

}


