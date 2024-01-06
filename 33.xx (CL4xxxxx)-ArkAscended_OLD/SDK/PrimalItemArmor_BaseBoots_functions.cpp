#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_BaseBoots.PrimalItemArmor_BaseBoots_C
// (None)

class UClass* UPrimalItemArmor_BaseBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_BaseBoots_C");

	return Clss;
}


// PrimalItemArmor_BaseBoots_C PrimalItemArmor_BaseBoots.Default__PrimalItemArmor_BaseBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_BaseBoots_C* UPrimalItemArmor_BaseBoots_C::GetDefaultObj()
{
	static class UPrimalItemArmor_BaseBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_BaseBoots_C*>(UPrimalItemArmor_BaseBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


