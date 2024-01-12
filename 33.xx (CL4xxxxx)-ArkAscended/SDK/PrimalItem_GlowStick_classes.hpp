#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEB0 - 0xEB0)
// BlueprintGeneratedClass PrimalItem_GlowStick.PrimalItem_GlowStick_C
class UPrimalItem_GlowStick_C : public UPrimalItem_Base_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItem_GlowStick_C* GetDefaultObj();

	double BPPostInitializeItem(class UWorld* OptionalInitWorld, int32* CallFunc_IncrementItemQuantity_ReturnValue, double* CallFunc_Less_DoubleDouble_A_ImplicitCast);
	bool BPItemBroken(bool* CallFunc_IsValid_ReturnValue, class AWeapGlowStick_Base_C* K2Node_DynamicCast_AsWeap_Glow_Stick_Base, bool* K2Node_DynamicCast_bSuccess, class AWeapGlowStick_Base_C* K2Node_DynamicCast_AsWeap_Glow_Stick_Base_1, bool* K2Node_DynamicCast_bSuccess_1, int32* CallFunc_IncrementItemQuantity_ReturnValue);
};

}


