#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Seed_Longrass.PrimalItemConsumable_Seed_Longrass_C
// (None)

class UClass* UPrimalItemConsumable_Seed_Longrass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Seed_Longrass_C");

	return Clss;
}


// PrimalItemConsumable_Seed_Longrass_C PrimalItemConsumable_Seed_Longrass.Default__PrimalItemConsumable_Seed_Longrass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Seed_Longrass_C* UPrimalItemConsumable_Seed_Longrass_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Seed_Longrass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Seed_Longrass_C*>(UPrimalItemConsumable_Seed_Longrass_C::StaticClass()->DefaultObject);

	return Default;
}

}


