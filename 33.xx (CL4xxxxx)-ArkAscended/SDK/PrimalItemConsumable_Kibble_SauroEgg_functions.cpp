#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Kibble_SauroEgg.PrimalItemConsumable_Kibble_SauroEgg_C
// (None)

class UClass* UPrimalItemConsumable_Kibble_SauroEgg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Kibble_SauroEgg_C");

	return Clss;
}


// PrimalItemConsumable_Kibble_SauroEgg_C PrimalItemConsumable_Kibble_SauroEgg.Default__PrimalItemConsumable_Kibble_SauroEgg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Kibble_SauroEgg_C* UPrimalItemConsumable_Kibble_SauroEgg_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Kibble_SauroEgg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Kibble_SauroEgg_C*>(UPrimalItemConsumable_Kibble_SauroEgg_C::StaticClass()->DefaultObject);

	return Default;
}

}


