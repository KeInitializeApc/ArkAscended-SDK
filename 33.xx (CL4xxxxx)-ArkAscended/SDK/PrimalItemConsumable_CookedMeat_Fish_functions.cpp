#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_CookedMeat_Fish.PrimalItemConsumable_CookedMeat_Fish_C
// (None)

class UClass* UPrimalItemConsumable_CookedMeat_Fish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_CookedMeat_Fish_C");

	return Clss;
}


// PrimalItemConsumable_CookedMeat_Fish_C PrimalItemConsumable_CookedMeat_Fish.Default__PrimalItemConsumable_CookedMeat_Fish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_CookedMeat_Fish_C* UPrimalItemConsumable_CookedMeat_Fish_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_CookedMeat_Fish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_CookedMeat_Fish_C*>(UPrimalItemConsumable_CookedMeat_Fish_C::StaticClass()->DefaultObject);

	return Default;
}

}


