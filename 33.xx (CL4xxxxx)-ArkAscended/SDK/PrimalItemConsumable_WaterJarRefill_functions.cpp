#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_WaterJarRefill.PrimalItemConsumable_WaterJarRefill_C
// (None)

class UClass* UPrimalItemConsumable_WaterJarRefill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_WaterJarRefill_C");

	return Clss;
}


// PrimalItemConsumable_WaterJarRefill_C PrimalItemConsumable_WaterJarRefill.Default__PrimalItemConsumable_WaterJarRefill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_WaterJarRefill_C* UPrimalItemConsumable_WaterJarRefill_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_WaterJarRefill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_WaterJarRefill_C*>(UPrimalItemConsumable_WaterJarRefill_C::StaticClass()->DefaultObject);

	return Default;
}

}


