#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEB0 - 0xEB0)
// BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C
class UPrimalItemResource_Gasoline_C : public UPrimalItemResource_Craftable_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemResource_Gasoline_C* GetDefaultObj();

	bool CheckForGasolineData(float CallFunc_Array_Get_Item, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	TArray<float> RefillGasoline(const struct FCustomItemData& K2Node_MakeStruct_CustomItemData);
	int32 BPUsedOntoItem();
	bool BPSupportUseOntoItem(bool ReturnValue);
};

}


