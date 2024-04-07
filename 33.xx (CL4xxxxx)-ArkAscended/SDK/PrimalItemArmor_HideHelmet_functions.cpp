#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_HideHelmet.PrimalItemArmor_HideHelmet_C
// (None)

class UClass* UPrimalItemArmor_HideHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_HideHelmet_C");

	return Clss;
}


// PrimalItemArmor_HideHelmet_C PrimalItemArmor_HideHelmet.Default__PrimalItemArmor_HideHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_HideHelmet_C* UPrimalItemArmor_HideHelmet_C::GetDefaultObj()
{
	static class UPrimalItemArmor_HideHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_HideHelmet_C*>(UPrimalItemArmor_HideHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


