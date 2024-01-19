#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x179 - 0x179)
// BlueprintGeneratedClass DmgType_Melee_StonePick_LifeSupport.DmgType_Melee_StonePick_LifeSupport_C
class UDmgType_Melee_StonePick_LifeSupport_C : public UDmgType_Melee_StonePick_C
{
public:

	static class UClass* StaticClass();
	static class UDmgType_Melee_StonePick_LifeSupport_C* GetDefaultObj();

	double BPAdjustDamage(float ReturnValue, struct FRotator* CallFunc_FindLookAtRotation_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, bool* CallFunc_BooleanOR_ReturnValue);
};

}


