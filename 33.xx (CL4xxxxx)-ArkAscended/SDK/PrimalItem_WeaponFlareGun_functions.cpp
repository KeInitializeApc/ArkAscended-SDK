#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponFlareGun.PrimalItem_WeaponFlareGun_C
// (None)

class UClass* UPrimalItem_WeaponFlareGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponFlareGun_C");

	return Clss;
}


// PrimalItem_WeaponFlareGun_C PrimalItem_WeaponFlareGun.Default__PrimalItem_WeaponFlareGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponFlareGun_C* UPrimalItem_WeaponFlareGun_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponFlareGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponFlareGun_C*>(UPrimalItem_WeaponFlareGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


