#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeaponGeneric.PrimalItemWeaponGeneric_C
// (None)

class UClass* UPrimalItemWeaponGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeaponGeneric_C");

	return Clss;
}


// PrimalItemWeaponGeneric_C PrimalItemWeaponGeneric.Default__PrimalItemWeaponGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeaponGeneric_C* UPrimalItemWeaponGeneric_C::GetDefaultObj()
{
	static class UPrimalItemWeaponGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeaponGeneric_C*>(UPrimalItemWeaponGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


