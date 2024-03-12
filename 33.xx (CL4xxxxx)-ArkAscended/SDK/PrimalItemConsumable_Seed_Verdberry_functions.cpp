#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Seed_Verdberry.PrimalItemConsumable_Seed_Verdberry_C
// (None)

class UClass* UPrimalItemConsumable_Seed_Verdberry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Seed_Verdberry_C");

	return Clss;
}


// PrimalItemConsumable_Seed_Verdberry_C PrimalItemConsumable_Seed_Verdberry.Default__PrimalItemConsumable_Seed_Verdberry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Seed_Verdberry_C* UPrimalItemConsumable_Seed_Verdberry_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Seed_Verdberry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Seed_Verdberry_C*>(UPrimalItemConsumable_Seed_Verdberry_C::StaticClass()->DefaultObject);

	return Default;
}

}


