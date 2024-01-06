#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponOilJar.PrimalItem_WeaponOilJar_C
// (None)

class UClass* UPrimalItem_WeaponOilJar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponOilJar_C");

	return Clss;
}


// PrimalItem_WeaponOilJar_C PrimalItem_WeaponOilJar.Default__PrimalItem_WeaponOilJar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponOilJar_C* UPrimalItem_WeaponOilJar_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponOilJar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponOilJar_C*>(UPrimalItem_WeaponOilJar_C::StaticClass()->DefaultObject);

	return Default;
}

}


