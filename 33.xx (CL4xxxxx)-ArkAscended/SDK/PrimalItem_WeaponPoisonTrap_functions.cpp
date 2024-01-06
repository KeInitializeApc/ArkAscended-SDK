#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponPoisonTrap.PrimalItem_WeaponPoisonTrap_C
// (None)

class UClass* UPrimalItem_WeaponPoisonTrap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponPoisonTrap_C");

	return Clss;
}


// PrimalItem_WeaponPoisonTrap_C PrimalItem_WeaponPoisonTrap.Default__PrimalItem_WeaponPoisonTrap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponPoisonTrap_C* UPrimalItem_WeaponPoisonTrap_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponPoisonTrap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponPoisonTrap_C*>(UPrimalItem_WeaponPoisonTrap_C::StaticClass()->DefaultObject);

	return Default;
}

}


