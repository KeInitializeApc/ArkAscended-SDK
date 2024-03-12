#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_HideShirt.PrimalItemArmor_HideShirt_C
// (None)

class UClass* UPrimalItemArmor_HideShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_HideShirt_C");

	return Clss;
}


// PrimalItemArmor_HideShirt_C PrimalItemArmor_HideShirt.Default__PrimalItemArmor_HideShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_HideShirt_C* UPrimalItemArmor_HideShirt_C::GetDefaultObj()
{
	static class UPrimalItemArmor_HideShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_HideShirt_C*>(UPrimalItemArmor_HideShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


