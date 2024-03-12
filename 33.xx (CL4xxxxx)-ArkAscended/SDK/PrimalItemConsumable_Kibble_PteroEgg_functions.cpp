#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Kibble_PteroEgg.PrimalItemConsumable_Kibble_PteroEgg_C
// (None)

class UClass* UPrimalItemConsumable_Kibble_PteroEgg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Kibble_PteroEgg_C");

	return Clss;
}


// PrimalItemConsumable_Kibble_PteroEgg_C PrimalItemConsumable_Kibble_PteroEgg.Default__PrimalItemConsumable_Kibble_PteroEgg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Kibble_PteroEgg_C* UPrimalItemConsumable_Kibble_PteroEgg_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Kibble_PteroEgg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Kibble_PteroEgg_C*>(UPrimalItemConsumable_Kibble_PteroEgg_C::StaticClass()->DefaultObject);

	return Default;
}

}


