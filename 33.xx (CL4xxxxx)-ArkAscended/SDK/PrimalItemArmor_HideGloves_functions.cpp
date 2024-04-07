#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_HideGloves.PrimalItemArmor_HideGloves_C
// (None)

class UClass* UPrimalItemArmor_HideGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_HideGloves_C");

	return Clss;
}


// PrimalItemArmor_HideGloves_C PrimalItemArmor_HideGloves.Default__PrimalItemArmor_HideGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_HideGloves_C* UPrimalItemArmor_HideGloves_C::GetDefaultObj()
{
	static class UPrimalItemArmor_HideGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_HideGloves_C*>(UPrimalItemArmor_HideGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


