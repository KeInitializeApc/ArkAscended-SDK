#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_CanteenRefill.PrimalItemConsumable_CanteenRefill_C
// (None)

class UClass* UPrimalItemConsumable_CanteenRefill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_CanteenRefill_C");

	return Clss;
}


// PrimalItemConsumable_CanteenRefill_C PrimalItemConsumable_CanteenRefill.Default__PrimalItemConsumable_CanteenRefill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_CanteenRefill_C* UPrimalItemConsumable_CanteenRefill_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_CanteenRefill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_CanteenRefill_C*>(UPrimalItemConsumable_CanteenRefill_C::StaticClass()->DefaultObject);

	return Default;
}

}


