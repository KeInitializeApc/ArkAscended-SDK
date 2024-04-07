#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTekGravityGrenade.PrimalItem_WeaponTekGravityGrenade_C
// (None)

class UClass* UPrimalItem_WeaponTekGravityGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTekGravityGrenade_C");

	return Clss;
}


// PrimalItem_WeaponTekGravityGrenade_C PrimalItem_WeaponTekGravityGrenade.Default__PrimalItem_WeaponTekGravityGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTekGravityGrenade_C* UPrimalItem_WeaponTekGravityGrenade_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTekGravityGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTekGravityGrenade_C*>(UPrimalItem_WeaponTekGravityGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


