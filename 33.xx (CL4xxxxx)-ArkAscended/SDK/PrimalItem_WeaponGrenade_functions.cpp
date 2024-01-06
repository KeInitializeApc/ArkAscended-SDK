#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponGrenade.PrimalItem_WeaponGrenade_C
// (None)

class UClass* UPrimalItem_WeaponGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponGrenade_C");

	return Clss;
}


// PrimalItem_WeaponGrenade_C PrimalItem_WeaponGrenade.Default__PrimalItem_WeaponGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponGrenade_C* UPrimalItem_WeaponGrenade_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponGrenade_C*>(UPrimalItem_WeaponGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


