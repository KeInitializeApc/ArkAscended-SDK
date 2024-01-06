#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponMachinedPistol.PrimalItem_WeaponMachinedPistol_C
// (None)

class UClass* UPrimalItem_WeaponMachinedPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponMachinedPistol_C");

	return Clss;
}


// PrimalItem_WeaponMachinedPistol_C PrimalItem_WeaponMachinedPistol.Default__PrimalItem_WeaponMachinedPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponMachinedPistol_C* UPrimalItem_WeaponMachinedPistol_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponMachinedPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponMachinedPistol_C*>(UPrimalItem_WeaponMachinedPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


