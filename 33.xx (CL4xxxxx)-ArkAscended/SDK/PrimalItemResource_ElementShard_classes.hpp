#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xED0 - 0xED0)
// BlueprintGeneratedClass PrimalItemResource_ElementShard.PrimalItemResource_ElementShard_C
class UPrimalItemResource_ElementShard_C : public UPrimalItemResourceGeneric_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemResource_ElementShard_C* GetDefaultObj();

	TArray<float> RefillElementShard(class UPrimalItem* DestinationItem, const TArray<double>& CustomFloats, TArray<double>* K2Node_VariableSet_CustomFloats_ImplicitCast);
	double CheckForElementShardData(class UPrimalItem* DestinationItem, bool* SupportsDragOnto, bool* ReturnVal);
	void BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue, bool* CallFunc_CheckForElementShardData_SupportsDragOnto);
	void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32* AdditionalData);
};

}


