#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ScubaPants.PrimalItemArmor_ScubaPants_C
// (None)

class UClass* UPrimalItemArmor_ScubaPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ScubaPants_C");

	return Clss;
}


// PrimalItemArmor_ScubaPants_C PrimalItemArmor_ScubaPants.Default__PrimalItemArmor_ScubaPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ScubaPants_C* UPrimalItemArmor_ScubaPants_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ScubaPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ScubaPants_C*>(UPrimalItemArmor_ScubaPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


