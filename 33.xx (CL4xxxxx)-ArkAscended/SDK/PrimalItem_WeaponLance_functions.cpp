#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponLance.PrimalItem_WeaponLance_C
// (None)

class UClass* UPrimalItem_WeaponLance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponLance_C");

	return Clss;
}


// PrimalItem_WeaponLance_C PrimalItem_WeaponLance.Default__PrimalItem_WeaponLance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponLance_C* UPrimalItem_WeaponLance_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponLance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponLance_C*>(UPrimalItem_WeaponLance_C::StaticClass()->DefaultObject);

	return Default;
}

}


