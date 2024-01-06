#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTripwireC4.PrimalItem_WeaponTripwireC4_C
// (None)

class UClass* UPrimalItem_WeaponTripwireC4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTripwireC4_C");

	return Clss;
}


// PrimalItem_WeaponTripwireC4_C PrimalItem_WeaponTripwireC4.Default__PrimalItem_WeaponTripwireC4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTripwireC4_C* UPrimalItem_WeaponTripwireC4_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTripwireC4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTripwireC4_C*>(UPrimalItem_WeaponTripwireC4_C::StaticClass()->DefaultObject);

	return Default;
}

}


