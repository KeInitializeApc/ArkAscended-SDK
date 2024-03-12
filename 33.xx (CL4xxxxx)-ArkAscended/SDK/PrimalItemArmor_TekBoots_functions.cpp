#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TekBoots.PrimalItemArmor_TekBoots_C
// (None)

class UClass* UPrimalItemArmor_TekBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TekBoots_C");

	return Clss;
}


// PrimalItemArmor_TekBoots_C PrimalItemArmor_TekBoots.Default__PrimalItemArmor_TekBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TekBoots_C* UPrimalItemArmor_TekBoots_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TekBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TekBoots_C*>(UPrimalItemArmor_TekBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


