#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_RocketHomingMissile.PrimalItemAmmo_RocketHomingMissile_C
// (None)

class UClass* UPrimalItemAmmo_RocketHomingMissile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_RocketHomingMissile_C");

	return Clss;
}


// PrimalItemAmmo_RocketHomingMissile_C PrimalItemAmmo_RocketHomingMissile.Default__PrimalItemAmmo_RocketHomingMissile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_RocketHomingMissile_C* UPrimalItemAmmo_RocketHomingMissile_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_RocketHomingMissile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_RocketHomingMissile_C*>(UPrimalItemAmmo_RocketHomingMissile_C::StaticClass()->DefaultObject);

	return Default;
}

}


