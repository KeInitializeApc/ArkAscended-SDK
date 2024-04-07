#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg_Rex.PrimalItemConsumable_Egg_Rex_C
// (None)

class UClass* UPrimalItemConsumable_Egg_Rex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_Rex_C");

	return Clss;
}


// PrimalItemConsumable_Egg_Rex_C PrimalItemConsumable_Egg_Rex.Default__PrimalItemConsumable_Egg_Rex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_Rex_C* UPrimalItemConsumable_Egg_Rex_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_Rex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_Rex_C*>(UPrimalItemConsumable_Egg_Rex_C::StaticClass()->DefaultObject);

	return Default;
}

}


