#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_FurBoots.PrimalItemArmor_FurBoots_C
// (None)

class UClass* UPrimalItemArmor_FurBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_FurBoots_C");

	return Clss;
}


// PrimalItemArmor_FurBoots_C PrimalItemArmor_FurBoots.Default__PrimalItemArmor_FurBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_FurBoots_C* UPrimalItemArmor_FurBoots_C::GetDefaultObj()
{
	static class UPrimalItemArmor_FurBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_FurBoots_C*>(UPrimalItemArmor_FurBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


