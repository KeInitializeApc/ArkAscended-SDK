#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTripwireFlare.PrimalItem_WeaponTripwireFlare_C
// (None)

class UClass* UPrimalItem_WeaponTripwireFlare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTripwireFlare_C");

	return Clss;
}


// PrimalItem_WeaponTripwireFlare_C PrimalItem_WeaponTripwireFlare.Default__PrimalItem_WeaponTripwireFlare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTripwireFlare_C* UPrimalItem_WeaponTripwireFlare_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTripwireFlare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTripwireFlare_C*>(UPrimalItem_WeaponTripwireFlare_C::StaticClass()->DefaultObject);

	return Default;
}

}


