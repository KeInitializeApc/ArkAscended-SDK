#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponGPS.PrimalItem_WeaponGPS_C
// (None)

class UClass* UPrimalItem_WeaponGPS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponGPS_C");

	return Clss;
}


// PrimalItem_WeaponGPS_C PrimalItem_WeaponGPS.Default__PrimalItem_WeaponGPS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponGPS_C* UPrimalItem_WeaponGPS_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponGPS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponGPS_C*>(UPrimalItem_WeaponGPS_C::StaticClass()->DefaultObject);

	return Default;
}

}


