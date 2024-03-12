#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WeaponC4.EngramEntry_WeaponC4_C
// (None)

class UClass* UEngramEntry_WeaponC4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WeaponC4_C");

	return Clss;
}


// EngramEntry_WeaponC4_C EngramEntry_WeaponC4.Default__EngramEntry_WeaponC4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WeaponC4_C* UEngramEntry_WeaponC4_C::GetDefaultObj()
{
	static class UEngramEntry_WeaponC4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WeaponC4_C*>(UEngramEntry_WeaponC4_C::StaticClass()->DefaultObject);

	return Default;
}

}


