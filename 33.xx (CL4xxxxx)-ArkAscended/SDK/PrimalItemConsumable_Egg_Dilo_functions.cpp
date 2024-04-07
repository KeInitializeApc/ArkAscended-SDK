#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg_Dilo.PrimalItemConsumable_Egg_Dilo_C
// (None)

class UClass* UPrimalItemConsumable_Egg_Dilo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_Dilo_C");

	return Clss;
}


// PrimalItemConsumable_Egg_Dilo_C PrimalItemConsumable_Egg_Dilo.Default__PrimalItemConsumable_Egg_Dilo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_Dilo_C* UPrimalItemConsumable_Egg_Dilo_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_Dilo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_Dilo_C*>(UPrimalItemConsumable_Egg_Dilo_C::StaticClass()->DefaultObject);

	return Default;
}

}


