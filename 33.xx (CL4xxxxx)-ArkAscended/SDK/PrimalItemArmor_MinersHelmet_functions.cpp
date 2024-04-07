#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MinersHelmet.PrimalItemArmor_MinersHelmet_C
// (None)

class UClass* UPrimalItemArmor_MinersHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MinersHelmet_C");

	return Clss;
}


// PrimalItemArmor_MinersHelmet_C PrimalItemArmor_MinersHelmet.Default__PrimalItemArmor_MinersHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MinersHelmet_C* UPrimalItemArmor_MinersHelmet_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MinersHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MinersHelmet_C*>(UPrimalItemArmor_MinersHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


