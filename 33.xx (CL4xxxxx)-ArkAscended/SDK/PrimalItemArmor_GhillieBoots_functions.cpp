#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_GhillieBoots.PrimalItemArmor_GhillieBoots_C
// (None)

class UClass* UPrimalItemArmor_GhillieBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_GhillieBoots_C");

	return Clss;
}


// PrimalItemArmor_GhillieBoots_C PrimalItemArmor_GhillieBoots.Default__PrimalItemArmor_GhillieBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_GhillieBoots_C* UPrimalItemArmor_GhillieBoots_C::GetDefaultObj()
{
	static class UPrimalItemArmor_GhillieBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_GhillieBoots_C*>(UPrimalItemArmor_GhillieBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


