#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xEE0 - 0xEE0)
// BlueprintGeneratedClass PrimalItem_Base_Battery.PrimalItem_Base_Battery_C
class UPrimalItem_Base_Battery_C : public UPrimalItem_Base_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItem_Base_Battery_C* GetDefaultObj();

	bool BPForceAllowRemoteAddToInventory(class UPrimalInventoryComponent** ToInventory, bool* RetVal, class AActor* CallFunc_GetOwner_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
};

}


