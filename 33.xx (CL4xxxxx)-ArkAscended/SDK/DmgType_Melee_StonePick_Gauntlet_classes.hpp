#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x179 - 0x179)
// BlueprintGeneratedClass DmgType_Melee_StonePick_Gauntlet.DmgType_Melee_StonePick_Gauntlet_C
class UDmgType_Melee_StonePick_Gauntlet_C : public UDmgType_Melee_StonePick_C
{
public:

	static class UClass* StaticClass();
	static class UDmgType_Melee_StonePick_Gauntlet_C* GetDefaultObj();

	bool BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, float ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, struct FRotator* CallFunc_FindLookAtRotation_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue, struct FVector* CallFunc_GetForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double* CallFunc_Multiply_VectorFloat_B_ImplicitCast);
};

}


