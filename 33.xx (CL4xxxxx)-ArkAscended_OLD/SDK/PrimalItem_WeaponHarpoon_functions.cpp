#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponHarpoon.PrimalItem_WeaponHarpoon_C
// (None)

class UClass* UPrimalItem_WeaponHarpoon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponHarpoon_C");

	return Clss;
}


// PrimalItem_WeaponHarpoon_C PrimalItem_WeaponHarpoon.Default__PrimalItem_WeaponHarpoon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponHarpoon_C* UPrimalItem_WeaponHarpoon_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponHarpoon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponHarpoon_C*>(UPrimalItem_WeaponHarpoon_C::StaticClass()->DefaultObject);

	return Default;
}

}


