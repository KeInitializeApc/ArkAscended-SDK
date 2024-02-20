#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xED0 - 0xED0)
// BlueprintGeneratedClass PrimalItem_GlowStick.PrimalItem_GlowStick_C
class UPrimalItem_GlowStick_C : public UPrimalItem_Base_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItem_GlowStick_C* GetDefaultObj();

	double BPPostInitializeItem(class UWorld* OptionalInitWorld, float CallFunc_GetItemStatModifier_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast);
	int32 BPItemBroken(bool* CallFunc_IsValid_ReturnValue, class AWeapGlowStick_Base_C* K2Node_DynamicCast_AsWeap_Glow_Stick_Base, class AWeapGlowStick_Base_C* K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1, float CallFunc_GetItemStatModifier_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
};

}


