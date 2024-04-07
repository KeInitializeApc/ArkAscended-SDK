#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_HideHelmetAlt.PrimalItemArmor_HideHelmetAlt_C
// (None)

class UClass* UPrimalItemArmor_HideHelmetAlt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_HideHelmetAlt_C");

	return Clss;
}


// PrimalItemArmor_HideHelmetAlt_C PrimalItemArmor_HideHelmetAlt.Default__PrimalItemArmor_HideHelmetAlt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_HideHelmetAlt_C* UPrimalItemArmor_HideHelmetAlt_C::GetDefaultObj()
{
	static class UPrimalItemArmor_HideHelmetAlt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_HideHelmetAlt_C*>(UPrimalItemArmor_HideHelmetAlt_C::StaticClass()->DefaultObject);

	return Default;
}

}


