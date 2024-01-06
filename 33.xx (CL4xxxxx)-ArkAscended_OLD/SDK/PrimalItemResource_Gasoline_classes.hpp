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

	double CheckForGasolineData();
	TArray<float> RefillGasoline(class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1);
	int32 BPUsedOntoItem();
	bool BPSupportUseOntoItem(bool* ReturnValue);
};

}


