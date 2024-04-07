#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_GhillieShirt.PrimalItemArmor_GhillieShirt_C
// (None)

class UClass* UPrimalItemArmor_GhillieShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_GhillieShirt_C");

	return Clss;
}


// PrimalItemArmor_GhillieShirt_C PrimalItemArmor_GhillieShirt.Default__PrimalItemArmor_GhillieShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_GhillieShirt_C* UPrimalItemArmor_GhillieShirt_C::GetDefaultObj()
{
	static class UPrimalItemArmor_GhillieShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_GhillieShirt_C*>(UPrimalItemArmor_GhillieShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


