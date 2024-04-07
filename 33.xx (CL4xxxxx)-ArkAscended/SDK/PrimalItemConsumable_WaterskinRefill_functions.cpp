#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_WaterskinRefill.PrimalItemConsumable_WaterskinRefill_C
// (None)

class UClass* UPrimalItemConsumable_WaterskinRefill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_WaterskinRefill_C");

	return Clss;
}


// PrimalItemConsumable_WaterskinRefill_C PrimalItemConsumable_WaterskinRefill.Default__PrimalItemConsumable_WaterskinRefill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_WaterskinRefill_C* UPrimalItemConsumable_WaterskinRefill_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_WaterskinRefill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_WaterskinRefill_C*>(UPrimalItemConsumable_WaterskinRefill_C::StaticClass()->DefaultObject);

	return Default;
}

}


