#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_BugRepellant.PrimalItemConsumable_BugRepellant_C
// (None)

class UClass* UPrimalItemConsumable_BugRepellant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_BugRepellant_C");

	return Clss;
}


// PrimalItemConsumable_BugRepellant_C PrimalItemConsumable_BugRepellant.Default__PrimalItemConsumable_BugRepellant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_BugRepellant_C* UPrimalItemConsumable_BugRepellant_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_BugRepellant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_BugRepellant_C*>(UPrimalItemConsumable_BugRepellant_C::StaticClass()->DefaultObject);

	return Default;
}

}


