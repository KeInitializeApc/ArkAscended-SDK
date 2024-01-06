#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_SimpleBullet.PrimalItemAmmo_SimpleBullet_C
// (None)

class UClass* UPrimalItemAmmo_SimpleBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_SimpleBullet_C");

	return Clss;
}


// PrimalItemAmmo_SimpleBullet_C PrimalItemAmmo_SimpleBullet.Default__PrimalItemAmmo_SimpleBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_SimpleBullet_C* UPrimalItemAmmo_SimpleBullet_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_SimpleBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_SimpleBullet_C*>(UPrimalItemAmmo_SimpleBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


