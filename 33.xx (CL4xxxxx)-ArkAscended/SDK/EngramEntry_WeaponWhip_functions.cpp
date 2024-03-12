#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WeaponWhip.EngramEntry_WeaponWhip_C
// (None)

class UClass* UEngramEntry_WeaponWhip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WeaponWhip_C");

	return Clss;
}


// EngramEntry_WeaponWhip_C EngramEntry_WeaponWhip.Default__EngramEntry_WeaponWhip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WeaponWhip_C* UEngramEntry_WeaponWhip_C::GetDefaultObj()
{
	static class UEngramEntry_WeaponWhip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WeaponWhip_C*>(UEngramEntry_WeaponWhip_C::StaticClass()->DefaultObject);

	return Default;
}

}


