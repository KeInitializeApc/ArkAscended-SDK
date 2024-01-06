#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemWeaponGenericNoStats.PrimalItemWeaponGenericNoStats_C
// (None)

class UClass* UPrimalItemWeaponGenericNoStats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemWeaponGenericNoStats_C");

	return Clss;
}


// PrimalItemWeaponGenericNoStats_C PrimalItemWeaponGenericNoStats.Default__PrimalItemWeaponGenericNoStats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemWeaponGenericNoStats_C* UPrimalItemWeaponGenericNoStats_C::GetDefaultObj()
{
	static class UPrimalItemWeaponGenericNoStats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemWeaponGenericNoStats_C*>(UPrimalItemWeaponGenericNoStats_C::StaticClass()->DefaultObject);

	return Default;
}

}


