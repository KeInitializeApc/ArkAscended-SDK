#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_AdvancedBullet.PrimalItemAmmo_AdvancedBullet_C
// (None)

class UClass* UPrimalItemAmmo_AdvancedBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_AdvancedBullet_C");

	return Clss;
}


// PrimalItemAmmo_AdvancedBullet_C PrimalItemAmmo_AdvancedBullet.Default__PrimalItemAmmo_AdvancedBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_AdvancedBullet_C* UPrimalItemAmmo_AdvancedBullet_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_AdvancedBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_AdvancedBullet_C*>(UPrimalItemAmmo_AdvancedBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


