#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_NetGun_Ammo.EngramEntry_NetGun_Ammo_C
// (None)

class UClass* UEngramEntry_NetGun_Ammo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_NetGun_Ammo_C");

	return Clss;
}


// EngramEntry_NetGun_Ammo_C EngramEntry_NetGun_Ammo.Default__EngramEntry_NetGun_Ammo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_NetGun_Ammo_C* UEngramEntry_NetGun_Ammo_C::GetDefaultObj()
{
	static class UEngramEntry_NetGun_Ammo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_NetGun_Ammo_C*>(UEngramEntry_NetGun_Ammo_C::StaticClass()->DefaultObject);

	return Default;
}

}


