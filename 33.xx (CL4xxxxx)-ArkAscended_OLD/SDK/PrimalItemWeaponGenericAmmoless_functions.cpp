#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeaponGenericAmmoless.PrimalItemWeaponGenericAmmoless_C
// (None)

class UClass* UPrimalItemWeaponGenericAmmoless_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeaponGenericAmmoless_C");

	return Clss;
}


// PrimalItemWeaponGenericAmmoless_C PrimalItemWeaponGenericAmmoless.Default__PrimalItemWeaponGenericAmmoless_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeaponGenericAmmoless_C* UPrimalItemWeaponGenericAmmoless_C::GetDefaultObj()
{
	static class UPrimalItemWeaponGenericAmmoless_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeaponGenericAmmoless_C*>(UPrimalItemWeaponGenericAmmoless_C::StaticClass()->DefaultObject);

	return Default;
}

}


