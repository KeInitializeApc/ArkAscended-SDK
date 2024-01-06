#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponGun.PrimalItem_WeaponGun_C
// (None)

class UClass* UPrimalItem_WeaponGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponGun_C");

	return Clss;
}


// PrimalItem_WeaponGun_C PrimalItem_WeaponGun.Default__PrimalItem_WeaponGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponGun_C* UPrimalItem_WeaponGun_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponGun_C*>(UPrimalItem_WeaponGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


