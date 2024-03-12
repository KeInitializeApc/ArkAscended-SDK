#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg_Large.PrimalItemConsumable_Egg_Large_C
// (None)

class UClass* UPrimalItemConsumable_Egg_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_Large_C");

	return Clss;
}


// PrimalItemConsumable_Egg_Large_C PrimalItemConsumable_Egg_Large.Default__PrimalItemConsumable_Egg_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_Large_C* UPrimalItemConsumable_Egg_Large_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_Large_C*>(UPrimalItemConsumable_Egg_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


