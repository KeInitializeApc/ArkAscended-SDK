#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTekPistol.PrimalItem_WeaponTekPistol_C
// (None)

class UClass* UPrimalItem_WeaponTekPistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTekPistol_C");

	return Clss;
}


// PrimalItem_WeaponTekPistol_C PrimalItem_WeaponTekPistol.Default__PrimalItem_WeaponTekPistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTekPistol_C* UPrimalItem_WeaponTekPistol_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTekPistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTekPistol_C*>(UPrimalItem_WeaponTekPistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


