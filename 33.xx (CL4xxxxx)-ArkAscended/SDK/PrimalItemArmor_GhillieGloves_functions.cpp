#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_GhillieGloves.PrimalItemArmor_GhillieGloves_C
// (None)

class UClass* UPrimalItemArmor_GhillieGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_GhillieGloves_C");

	return Clss;
}


// PrimalItemArmor_GhillieGloves_C PrimalItemArmor_GhillieGloves.Default__PrimalItemArmor_GhillieGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_GhillieGloves_C* UPrimalItemArmor_GhillieGloves_C::GetDefaultObj()
{
	static class UPrimalItemArmor_GhillieGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_GhillieGloves_C*>(UPrimalItemArmor_GhillieGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


