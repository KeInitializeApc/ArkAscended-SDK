#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_RiotBoots.PrimalItemArmor_RiotBoots_C
// (None)

class UClass* UPrimalItemArmor_RiotBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_RiotBoots_C");

	return Clss;
}


// PrimalItemArmor_RiotBoots_C PrimalItemArmor_RiotBoots.Default__PrimalItemArmor_RiotBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_RiotBoots_C* UPrimalItemArmor_RiotBoots_C::GetDefaultObj()
{
	static class UPrimalItemArmor_RiotBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_RiotBoots_C*>(UPrimalItemArmor_RiotBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


