#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Kibble_SpinoEgg.PrimalItemConsumable_Kibble_SpinoEgg_C
// (None)

class UClass* UPrimalItemConsumable_Kibble_SpinoEgg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Kibble_SpinoEgg_C");

	return Clss;
}


// PrimalItemConsumable_Kibble_SpinoEgg_C PrimalItemConsumable_Kibble_SpinoEgg.Default__PrimalItemConsumable_Kibble_SpinoEgg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Kibble_SpinoEgg_C* UPrimalItemConsumable_Kibble_SpinoEgg_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Kibble_SpinoEgg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Kibble_SpinoEgg_C*>(UPrimalItemConsumable_Kibble_SpinoEgg_C::StaticClass()->DefaultObject);

	return Default;
}

}


