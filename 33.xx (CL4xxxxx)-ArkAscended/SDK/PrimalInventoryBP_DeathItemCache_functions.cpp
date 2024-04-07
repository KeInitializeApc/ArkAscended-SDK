#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalInventoryBP_DeathItemCache.PrimalInventoryBP_DeathItemCache_C
// (None)

class UClass* UPrimalInventoryBP_DeathItemCache_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalInventoryBP_DeathItemCache_C");

	return Clss;
}


// PrimalInventoryBP_DeathItemCache_C PrimalInventoryBP_DeathItemCache.Default__PrimalInventoryBP_DeathItemCache_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalInventoryBP_DeathItemCache_C* UPrimalInventoryBP_DeathItemCache_C::GetDefaultObj()
{
	static class UPrimalInventoryBP_DeathItemCache_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalInventoryBP_DeathItemCache_C*>(UPrimalInventoryBP_DeathItemCache_C::StaticClass()->DefaultObject);

	return Default;
}

}


