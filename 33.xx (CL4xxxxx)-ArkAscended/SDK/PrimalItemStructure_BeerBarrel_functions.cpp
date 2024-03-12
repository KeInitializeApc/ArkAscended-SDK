#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BeerBarrel.PrimalItemStructure_BeerBarrel_C
// (None)

class UClass* UPrimalItemStructure_BeerBarrel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BeerBarrel_C");

	return Clss;
}


// PrimalItemStructure_BeerBarrel_C PrimalItemStructure_BeerBarrel.Default__PrimalItemStructure_BeerBarrel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BeerBarrel_C* UPrimalItemStructure_BeerBarrel_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BeerBarrel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BeerBarrel_C*>(UPrimalItemStructure_BeerBarrel_C::StaticClass()->DefaultObject);

	return Default;
}

}


