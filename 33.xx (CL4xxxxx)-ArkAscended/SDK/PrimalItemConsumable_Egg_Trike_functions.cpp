#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg_Trike.PrimalItemConsumable_Egg_Trike_C
// (None)

class UClass* UPrimalItemConsumable_Egg_Trike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_Trike_C");

	return Clss;
}


// PrimalItemConsumable_Egg_Trike_C PrimalItemConsumable_Egg_Trike.Default__PrimalItemConsumable_Egg_Trike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_Trike_C* UPrimalItemConsumable_Egg_Trike_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_Trike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_Trike_C*>(UPrimalItemConsumable_Egg_Trike_C::StaticClass()->DefaultObject);

	return Default;
}

}


