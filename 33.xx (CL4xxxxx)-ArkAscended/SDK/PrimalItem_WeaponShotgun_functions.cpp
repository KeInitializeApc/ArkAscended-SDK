#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponShotgun.PrimalItem_WeaponShotgun_C
// (None)

class UClass* UPrimalItem_WeaponShotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponShotgun_C");

	return Clss;
}


// PrimalItem_WeaponShotgun_C PrimalItem_WeaponShotgun.Default__PrimalItem_WeaponShotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponShotgun_C* UPrimalItem_WeaponShotgun_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponShotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponShotgun_C*>(UPrimalItem_WeaponShotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


