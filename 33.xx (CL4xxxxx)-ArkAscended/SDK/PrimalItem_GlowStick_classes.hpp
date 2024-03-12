#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEE0 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_GlowStick.PrimalItem_GlowStick_C
class UPrimalItem_GlowStick_C : public UPrimalItem_Base_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItem_GlowStick_C* GetDefaultObj();

	double BPPostInitializeItem(int32 CallFunc_IncrementItemQuantity_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	bool BPItemBroken(bool* CallFunc_Greater_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, int32 CallFunc_IncrementItemQuantity_ReturnValue);
};

}


