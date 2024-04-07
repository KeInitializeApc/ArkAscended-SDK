#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_HideBoots.PrimalItemArmor_HideBoots_C
// (None)

class UClass* UPrimalItemArmor_HideBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_HideBoots_C");

	return Clss;
}


// PrimalItemArmor_HideBoots_C PrimalItemArmor_HideBoots.Default__PrimalItemArmor_HideBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_HideBoots_C* UPrimalItemArmor_HideBoots_C::GetDefaultObj()
{
	static class UPrimalItemArmor_HideBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_HideBoots_C*>(UPrimalItemArmor_HideBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


