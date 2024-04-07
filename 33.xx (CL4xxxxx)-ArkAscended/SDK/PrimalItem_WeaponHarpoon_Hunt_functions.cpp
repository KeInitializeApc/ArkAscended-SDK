#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponHarpoon_Hunt.PrimalItem_WeaponHarpoon_Hunt_C
// (None)

class UClass* UPrimalItem_WeaponHarpoon_Hunt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponHarpoon_Hunt_C");

	return Clss;
}


// PrimalItem_WeaponHarpoon_Hunt_C PrimalItem_WeaponHarpoon_Hunt.Default__PrimalItem_WeaponHarpoon_Hunt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponHarpoon_Hunt_C* UPrimalItem_WeaponHarpoon_Hunt_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponHarpoon_Hunt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponHarpoon_Hunt_C*>(UPrimalItem_WeaponHarpoon_Hunt_C::StaticClass()->DefaultObject);

	return Default;
}

}


