#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Kibble_ScorpionEgg.PrimalItemConsumable_Kibble_ScorpionEgg_C
// (None)

class UClass* UPrimalItemConsumable_Kibble_ScorpionEgg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Kibble_ScorpionEgg_C");

	return Clss;
}


// PrimalItemConsumable_Kibble_ScorpionEgg_C PrimalItemConsumable_Kibble_ScorpionEgg.Default__PrimalItemConsumable_Kibble_ScorpionEgg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Kibble_ScorpionEgg_C* UPrimalItemConsumable_Kibble_ScorpionEgg_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Kibble_ScorpionEgg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Kibble_ScorpionEgg_C*>(UPrimalItemConsumable_Kibble_ScorpionEgg_C::StaticClass()->DefaultObject);

	return Default;
}

}


