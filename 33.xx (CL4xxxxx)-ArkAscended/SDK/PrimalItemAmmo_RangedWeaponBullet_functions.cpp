#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_RangedWeaponBullet.PrimalItemAmmo_RangedWeaponBullet_C
// (None)

class UClass* UPrimalItemAmmo_RangedWeaponBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_RangedWeaponBullet_C");

	return Clss;
}


// PrimalItemAmmo_RangedWeaponBullet_C PrimalItemAmmo_RangedWeaponBullet.Default__PrimalItemAmmo_RangedWeaponBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_RangedWeaponBullet_C* UPrimalItemAmmo_RangedWeaponBullet_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_RangedWeaponBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_RangedWeaponBullet_C*>(UPrimalItemAmmo_RangedWeaponBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


