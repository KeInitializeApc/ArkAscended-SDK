#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_BeerJar.PrimalItemConsumable_BeerJar_C
// (None)

class UClass* UPrimalItemConsumable_BeerJar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_BeerJar_C");

	return Clss;
}


// PrimalItemConsumable_BeerJar_C PrimalItemConsumable_BeerJar.Default__PrimalItemConsumable_BeerJar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_BeerJar_C* UPrimalItemConsumable_BeerJar_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_BeerJar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_BeerJar_C*>(UPrimalItemConsumable_BeerJar_C::StaticClass()->DefaultObject);

	return Default;
}

}


