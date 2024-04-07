#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg_Sarco.PrimalItemConsumable_Egg_Sarco_C
// (None)

class UClass* UPrimalItemConsumable_Egg_Sarco_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_Sarco_C");

	return Clss;
}


// PrimalItemConsumable_Egg_Sarco_C PrimalItemConsumable_Egg_Sarco.Default__PrimalItemConsumable_Egg_Sarco_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_Sarco_C* UPrimalItemConsumable_Egg_Sarco_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_Sarco_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_Sarco_C*>(UPrimalItemConsumable_Egg_Sarco_C::StaticClass()->DefaultObject);

	return Default;
}

}


