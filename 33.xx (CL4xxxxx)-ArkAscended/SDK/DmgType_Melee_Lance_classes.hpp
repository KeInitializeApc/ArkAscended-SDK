#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x179 - 0x179)
// BlueprintGeneratedClass DmgType_Melee_Lance.DmgType_Melee_Lance_C
class UDmgType_Melee_Lance_C : public UDmgType_Melee_Torpidity_Low_C
{
public:

	static class UClass* StaticClass();
	static class UDmgType_Melee_Lance_C* GetDefaultObj();

	bool BPAdjustDamage(float ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AWeapLance_C** K2Node_DynamicCast_AsWeap_Lance, struct FHitResult* CallFunc_K2_SetActorLocation_SweepHitResult, bool* CallFunc_K2_SetActorLocation_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
};

}


