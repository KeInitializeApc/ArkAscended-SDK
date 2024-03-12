#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Kibble_ArgentEgg.PrimalItemConsumable_Kibble_ArgentEgg_C
// (None)

class UClass* UPrimalItemConsumable_Kibble_ArgentEgg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Kibble_ArgentEgg_C");

	return Clss;
}


// PrimalItemConsumable_Kibble_ArgentEgg_C PrimalItemConsumable_Kibble_ArgentEgg.Default__PrimalItemConsumable_Kibble_ArgentEgg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Kibble_ArgentEgg_C* UPrimalItemConsumable_Kibble_ArgentEgg_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Kibble_ArgentEgg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Kibble_ArgentEgg_C*>(UPrimalItemConsumable_Kibble_ArgentEgg_C::StaticClass()->DefaultObject);

	return Default;
}

}


