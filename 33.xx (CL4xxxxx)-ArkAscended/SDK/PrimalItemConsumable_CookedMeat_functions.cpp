#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_CookedMeat.PrimalItemConsumable_CookedMeat_C
// (None)

class UClass* UPrimalItemConsumable_CookedMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_CookedMeat_C");

	return Clss;
}


// PrimalItemConsumable_CookedMeat_C PrimalItemConsumable_CookedMeat.Default__PrimalItemConsumable_CookedMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_CookedMeat_C* UPrimalItemConsumable_CookedMeat_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_CookedMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_CookedMeat_C*>(UPrimalItemConsumable_CookedMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


