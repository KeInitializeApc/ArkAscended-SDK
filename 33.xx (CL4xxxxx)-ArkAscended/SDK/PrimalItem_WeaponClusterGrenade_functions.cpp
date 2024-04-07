#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponClusterGrenade.PrimalItem_WeaponClusterGrenade_C
// (None)

class UClass* UPrimalItem_WeaponClusterGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponClusterGrenade_C");

	return Clss;
}


// PrimalItem_WeaponClusterGrenade_C PrimalItem_WeaponClusterGrenade.Default__PrimalItem_WeaponClusterGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponClusterGrenade_C* UPrimalItem_WeaponClusterGrenade_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponClusterGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponClusterGrenade_C*>(UPrimalItem_WeaponClusterGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


