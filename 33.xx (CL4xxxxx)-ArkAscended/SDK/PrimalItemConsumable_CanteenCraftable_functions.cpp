#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_CanteenCraftable.PrimalItemConsumable_CanteenCraftable_C
// (None)

class UClass* UPrimalItemConsumable_CanteenCraftable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_CanteenCraftable_C");

	return Clss;
}


// PrimalItemConsumable_CanteenCraftable_C PrimalItemConsumable_CanteenCraftable.Default__PrimalItemConsumable_CanteenCraftable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_CanteenCraftable_C* UPrimalItemConsumable_CanteenCraftable_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_CanteenCraftable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_CanteenCraftable_C*>(UPrimalItemConsumable_CanteenCraftable_C::StaticClass()->DefaultObject);

	return Default;
}

}


