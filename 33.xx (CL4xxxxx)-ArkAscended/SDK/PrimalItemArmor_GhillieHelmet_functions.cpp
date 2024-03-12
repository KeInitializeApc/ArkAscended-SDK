#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_GhillieHelmet.PrimalItemArmor_GhillieHelmet_C
// (None)

class UClass* UPrimalItemArmor_GhillieHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_GhillieHelmet_C");

	return Clss;
}


// PrimalItemArmor_GhillieHelmet_C PrimalItemArmor_GhillieHelmet.Default__PrimalItemArmor_GhillieHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_GhillieHelmet_C* UPrimalItemArmor_GhillieHelmet_C::GetDefaultObj()
{
	static class UPrimalItemArmor_GhillieHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_GhillieHelmet_C*>(UPrimalItemArmor_GhillieHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


