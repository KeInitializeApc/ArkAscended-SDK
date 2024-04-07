#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_PlantSpeciesZ_Grenade.PrimalItem_PlantSpeciesZ_Grenade_C
// (None)

class UClass* UPrimalItem_PlantSpeciesZ_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_PlantSpeciesZ_Grenade_C");

	return Clss;
}


// PrimalItem_PlantSpeciesZ_Grenade_C PrimalItem_PlantSpeciesZ_Grenade.Default__PrimalItem_PlantSpeciesZ_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_PlantSpeciesZ_Grenade_C* UPrimalItem_PlantSpeciesZ_Grenade_C::GetDefaultObj()
{
	static class UPrimalItem_PlantSpeciesZ_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_PlantSpeciesZ_Grenade_C*>(UPrimalItem_PlantSpeciesZ_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


