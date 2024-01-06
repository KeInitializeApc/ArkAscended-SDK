#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_SimpleRifleBullet.PrimalItemAmmo_SimpleRifleBullet_C
// (None)

class UClass* UPrimalItemAmmo_SimpleRifleBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_SimpleRifleBullet_C");

	return Clss;
}


// PrimalItemAmmo_SimpleRifleBullet_C PrimalItemAmmo_SimpleRifleBullet.Default__PrimalItemAmmo_SimpleRifleBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_SimpleRifleBullet_C* UPrimalItemAmmo_SimpleRifleBullet_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_SimpleRifleBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_SimpleRifleBullet_C*>(UPrimalItemAmmo_SimpleRifleBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


