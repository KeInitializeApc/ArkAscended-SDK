#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponAdminBlinkRifle.PrimalItem_WeaponAdminBlinkRifle_C
// (None)

class UClass* UPrimalItem_WeaponAdminBlinkRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponAdminBlinkRifle_C");

	return Clss;
}


// PrimalItem_WeaponAdminBlinkRifle_C PrimalItem_WeaponAdminBlinkRifle.Default__PrimalItem_WeaponAdminBlinkRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponAdminBlinkRifle_C* UPrimalItem_WeaponAdminBlinkRifle_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponAdminBlinkRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponAdminBlinkRifle_C*>(UPrimalItem_WeaponAdminBlinkRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


