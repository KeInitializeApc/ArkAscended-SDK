#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponMachinedShotgun.PrimalItem_WeaponMachinedShotgun_C
// (None)

class UClass* UPrimalItem_WeaponMachinedShotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponMachinedShotgun_C");

	return Clss;
}


// PrimalItem_WeaponMachinedShotgun_C PrimalItem_WeaponMachinedShotgun.Default__PrimalItem_WeaponMachinedShotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponMachinedShotgun_C* UPrimalItem_WeaponMachinedShotgun_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponMachinedShotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponMachinedShotgun_C*>(UPrimalItem_WeaponMachinedShotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


