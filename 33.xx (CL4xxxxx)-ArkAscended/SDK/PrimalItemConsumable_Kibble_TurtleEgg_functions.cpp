#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Kibble_TurtleEgg.PrimalItemConsumable_Kibble_TurtleEgg_C
// (None)

class UClass* UPrimalItemConsumable_Kibble_TurtleEgg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Kibble_TurtleEgg_C");

	return Clss;
}


// PrimalItemConsumable_Kibble_TurtleEgg_C PrimalItemConsumable_Kibble_TurtleEgg.Default__PrimalItemConsumable_Kibble_TurtleEgg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Kibble_TurtleEgg_C* UPrimalItemConsumable_Kibble_TurtleEgg_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Kibble_TurtleEgg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Kibble_TurtleEgg_C*>(UPrimalItemConsumable_Kibble_TurtleEgg_C::StaticClass()->DefaultObject);

	return Default;
}

}


