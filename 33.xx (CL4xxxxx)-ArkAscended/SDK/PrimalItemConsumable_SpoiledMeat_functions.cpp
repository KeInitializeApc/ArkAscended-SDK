#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_SpoiledMeat.PrimalItemConsumable_SpoiledMeat_C
// (None)

class UClass* UPrimalItemConsumable_SpoiledMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_SpoiledMeat_C");

	return Clss;
}


// PrimalItemConsumable_SpoiledMeat_C PrimalItemConsumable_SpoiledMeat.Default__PrimalItemConsumable_SpoiledMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_SpoiledMeat_C* UPrimalItemConsumable_SpoiledMeat_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_SpoiledMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_SpoiledMeat_C*>(UPrimalItemConsumable_SpoiledMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


