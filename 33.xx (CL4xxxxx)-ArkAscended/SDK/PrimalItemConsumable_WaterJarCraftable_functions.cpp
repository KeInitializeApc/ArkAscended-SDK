#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_WaterJarCraftable.PrimalItemConsumable_WaterJarCraftable_C
// (None)

class UClass* UPrimalItemConsumable_WaterJarCraftable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_WaterJarCraftable_C");

	return Clss;
}


// PrimalItemConsumable_WaterJarCraftable_C PrimalItemConsumable_WaterJarCraftable.Default__PrimalItemConsumable_WaterJarCraftable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_WaterJarCraftable_C* UPrimalItemConsumable_WaterJarCraftable_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_WaterJarCraftable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_WaterJarCraftable_C*>(UPrimalItemConsumable_WaterJarCraftable_C::StaticClass()->DefaultObject);

	return Default;
}

}


