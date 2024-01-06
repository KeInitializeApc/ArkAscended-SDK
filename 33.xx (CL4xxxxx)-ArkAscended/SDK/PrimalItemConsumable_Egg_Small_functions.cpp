#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg_Small.PrimalItemConsumable_Egg_Small_C
// (None)

class UClass* UPrimalItemConsumable_Egg_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_Small_C");

	return Clss;
}


// PrimalItemConsumable_Egg_Small_C PrimalItemConsumable_Egg_Small.Default__PrimalItemConsumable_Egg_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_Small_C* UPrimalItemConsumable_Egg_Small_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_Small_C*>(UPrimalItemConsumable_Egg_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


