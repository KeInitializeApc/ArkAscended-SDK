#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_CookingPot.PrimalItemStructure_CookingPot_C
// (None)

class UClass* UPrimalItemStructure_CookingPot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_CookingPot_C");

	return Clss;
}


// PrimalItemStructure_CookingPot_C PrimalItemStructure_CookingPot.Default__PrimalItemStructure_CookingPot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_CookingPot_C* UPrimalItemStructure_CookingPot_C::GetDefaultObj()
{
	static class UPrimalItemStructure_CookingPot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_CookingPot_C*>(UPrimalItemStructure_CookingPot_C::StaticClass()->DefaultObject);

	return Default;
}

}


