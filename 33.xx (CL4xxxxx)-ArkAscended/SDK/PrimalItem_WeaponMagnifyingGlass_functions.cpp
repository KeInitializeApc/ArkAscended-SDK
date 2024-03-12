#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponMagnifyingGlass.PrimalItem_WeaponMagnifyingGlass_C
// (None)

class UClass* UPrimalItem_WeaponMagnifyingGlass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponMagnifyingGlass_C");

	return Clss;
}


// PrimalItem_WeaponMagnifyingGlass_C PrimalItem_WeaponMagnifyingGlass.Default__PrimalItem_WeaponMagnifyingGlass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponMagnifyingGlass_C* UPrimalItem_WeaponMagnifyingGlass_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponMagnifyingGlass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponMagnifyingGlass_C*>(UPrimalItem_WeaponMagnifyingGlass_C::StaticClass()->DefaultObject);

	return Default;
}

}


