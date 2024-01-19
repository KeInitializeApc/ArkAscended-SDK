#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEB0 - 0xEB0)
// BlueprintGeneratedClass PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C
class UPrimalItemResource_ElementShard_C : public UPrimalItemResourceGeneric_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemResource_ElementShard_C* GetDefaultObj();

	TArray<double> RefillElementShard(TArray<double>* CustomFloats, const struct FCustomItemData& K2Node_MakeStruct_CustomItemData, bool CallFunc_BooleanAND_ReturnValue);
	bool CheckForElementShardData(float CallFunc_Array_Get_Item, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	bool BPSupportUseOntoItem(bool ReturnValue);
	int32 BPUsedOntoItem();
};

}


