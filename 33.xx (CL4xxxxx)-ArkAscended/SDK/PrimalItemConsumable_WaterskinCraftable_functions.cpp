#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_WaterskinCraftable.PrimalItemConsumable_WaterskinCraftable_C
// (None)

class UClass* UPrimalItemConsumable_WaterskinCraftable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_WaterskinCraftable_C");

	return Clss;
}


// PrimalItemConsumable_WaterskinCraftable_C PrimalItemConsumable_WaterskinCraftable.Default__PrimalItemConsumable_WaterskinCraftable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_WaterskinCraftable_C* UPrimalItemConsumable_WaterskinCraftable_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_WaterskinCraftable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_WaterskinCraftable_C*>(UPrimalItemConsumable_WaterskinCraftable_C::StaticClass()->DefaultObject);

	return Default;
}

}


