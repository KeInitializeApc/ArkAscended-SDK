#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xED0 - 0xED0)
// BlueprintGeneratedClass PrimalItemResource_Gasoline.PrimalItemResource_Gasoline_C
class UPrimalItemResource_Gasoline_C : public UPrimalItemResource_Craftable_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItemResource_Gasoline_C* GetDefaultObj();

	double CheckForGasolineData(class UPrimalItem* DestinationItem);
	TArray<float> RefillGasoline(class UPrimalItem* DestinationItem);
	void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32* AdditionalData);
	bool BPSupportUseOntoItem(class UPrimalItem* DestinationItem, bool ReturnValue);
};

}


