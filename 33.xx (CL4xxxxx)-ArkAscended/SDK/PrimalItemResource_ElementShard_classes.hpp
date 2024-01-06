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

	TArray<double> RefillElementShard(class FString* CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	double CheckForElementShardData(bool CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	class UPrimalItem* BPSupportUseOntoItem(bool* ReturnValue, bool* CallFunc_CheckForElementShardData_SupportsDragOnto);
	int32 BPUsedOntoItem();
};

}


