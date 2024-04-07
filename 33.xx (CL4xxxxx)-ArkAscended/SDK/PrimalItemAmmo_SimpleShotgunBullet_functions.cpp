#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_SimpleShotgunBullet.PrimalItemAmmo_SimpleShotgunBullet_C
// (None)

class UClass* UPrimalItemAmmo_SimpleShotgunBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_SimpleShotgunBullet_C");

	return Clss;
}


// PrimalItemAmmo_SimpleShotgunBullet_C PrimalItemAmmo_SimpleShotgunBullet.Default__PrimalItemAmmo_SimpleShotgunBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_SimpleShotgunBullet_C* UPrimalItemAmmo_SimpleShotgunBullet_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_SimpleShotgunBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_SimpleShotgunBullet_C*>(UPrimalItemAmmo_SimpleShotgunBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


