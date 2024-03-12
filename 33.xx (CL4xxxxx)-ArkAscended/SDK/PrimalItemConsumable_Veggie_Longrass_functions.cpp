#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Veggie_Longrass.PrimalItemConsumable_Veggie_Longrass_C
// (None)

class UClass* UPrimalItemConsumable_Veggie_Longrass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Veggie_Longrass_C");

	return Clss;
}


// PrimalItemConsumable_Veggie_Longrass_C PrimalItemConsumable_Veggie_Longrass.Default__PrimalItemConsumable_Veggie_Longrass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Veggie_Longrass_C* UPrimalItemConsumable_Veggie_Longrass_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Veggie_Longrass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Veggie_Longrass_C*>(UPrimalItemConsumable_Veggie_Longrass_C::StaticClass()->DefaultObject);

	return Default;
}

}


