#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_NetGun.PrimalItemAmmo_NetGun_C
// (None)

class UClass* UPrimalItemAmmo_NetGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_NetGun_C");

	return Clss;
}


// PrimalItemAmmo_NetGun_C PrimalItemAmmo_NetGun.Default__PrimalItemAmmo_NetGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_NetGun_C* UPrimalItemAmmo_NetGun_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_NetGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_NetGun_C*>(UPrimalItemAmmo_NetGun_C::StaticClass()->DefaultObject);

	return Default;
}

}


