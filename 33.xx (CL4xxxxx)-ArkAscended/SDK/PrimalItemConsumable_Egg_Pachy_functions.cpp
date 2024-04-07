#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg_Pachy.PrimalItemConsumable_Egg_Pachy_C
// (None)

class UClass* UPrimalItemConsumable_Egg_Pachy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_Pachy_C");

	return Clss;
}


// PrimalItemConsumable_Egg_Pachy_C PrimalItemConsumable_Egg_Pachy.Default__PrimalItemConsumable_Egg_Pachy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_Pachy_C* UPrimalItemConsumable_Egg_Pachy_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_Pachy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_Pachy_C*>(UPrimalItemConsumable_Egg_Pachy_C::StaticClass()->DefaultObject);

	return Default;
}

}


