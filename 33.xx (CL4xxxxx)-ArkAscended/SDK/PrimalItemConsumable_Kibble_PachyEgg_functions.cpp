#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Kibble_PachyEgg.PrimalItemConsumable_Kibble_PachyEgg_C
// (None)

class UClass* UPrimalItemConsumable_Kibble_PachyEgg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Kibble_PachyEgg_C");

	return Clss;
}


// PrimalItemConsumable_Kibble_PachyEgg_C PrimalItemConsumable_Kibble_PachyEgg.Default__PrimalItemConsumable_Kibble_PachyEgg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Kibble_PachyEgg_C* UPrimalItemConsumable_Kibble_PachyEgg_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Kibble_PachyEgg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Kibble_PachyEgg_C*>(UPrimalItemConsumable_Kibble_PachyEgg_C::StaticClass()->DefaultObject);

	return Default;
}

}


