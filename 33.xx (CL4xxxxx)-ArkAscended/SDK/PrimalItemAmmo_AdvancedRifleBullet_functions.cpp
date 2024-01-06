#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_AdvancedRifleBullet.PrimalItemAmmo_AdvancedRifleBullet_C
// (None)

class UClass* UPrimalItemAmmo_AdvancedRifleBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_AdvancedRifleBullet_C");

	return Clss;
}


// PrimalItemAmmo_AdvancedRifleBullet_C PrimalItemAmmo_AdvancedRifleBullet.Default__PrimalItemAmmo_AdvancedRifleBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_AdvancedRifleBullet_C* UPrimalItemAmmo_AdvancedRifleBullet_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_AdvancedRifleBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_AdvancedRifleBullet_C*>(UPrimalItemAmmo_AdvancedRifleBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


