#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_CookedLambChop.PrimalItemConsumable_CookedLambChop_C
// (None)

class UClass* UPrimalItemConsumable_CookedLambChop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_CookedLambChop_C");

	return Clss;
}


// PrimalItemConsumable_CookedLambChop_C PrimalItemConsumable_CookedLambChop.Default__PrimalItemConsumable_CookedLambChop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_CookedLambChop_C* UPrimalItemConsumable_CookedLambChop_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_CookedLambChop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_CookedLambChop_C*>(UPrimalItemConsumable_CookedLambChop_C::StaticClass()->DefaultObject);

	return Default;
}

}


