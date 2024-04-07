#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeaponGenericGun.PrimalItemWeaponGenericGun_C
// (None)

class UClass* UPrimalItemWeaponGenericGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeaponGenericGun_C");

	return Clss;
}


// PrimalItemWeaponGenericGun_C PrimalItemWeaponGenericGun.Default__PrimalItemWeaponGenericGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeaponGenericGun_C* UPrimalItemWeaponGenericGun_C::GetDefaultObj()
{
	static class UPrimalItemWeaponGenericGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeaponGenericGun_C*>(UPrimalItemWeaponGenericGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


