#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_AdvancedSniperBullet.PrimalItemAmmo_AdvancedSniperBullet_C
// (None)

class UClass* UPrimalItemAmmo_AdvancedSniperBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_AdvancedSniperBullet_C");

	return Clss;
}


// PrimalItemAmmo_AdvancedSniperBullet_C PrimalItemAmmo_AdvancedSniperBullet.Default__PrimalItemAmmo_AdvancedSniperBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_AdvancedSniperBullet_C* UPrimalItemAmmo_AdvancedSniperBullet_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_AdvancedSniperBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_AdvancedSniperBullet_C*>(UPrimalItemAmmo_AdvancedSniperBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


