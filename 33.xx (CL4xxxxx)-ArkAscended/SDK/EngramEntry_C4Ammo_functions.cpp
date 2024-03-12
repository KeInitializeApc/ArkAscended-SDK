#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_C4Ammo.EngramEntry_C4Ammo_C
// (None)

class UClass* UEngramEntry_C4Ammo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_C4Ammo_C");

	return Clss;
}


// EngramEntry_C4Ammo_C EngramEntry_C4Ammo.Default__EngramEntry_C4Ammo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_C4Ammo_C* UEngramEntry_C4Ammo_C::GetDefaultObj()
{
	static class UEngramEntry_C4Ammo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_C4Ammo_C*>(UEngramEntry_C4Ammo_C::StaticClass()->DefaultObject);

	return Default;
}

}


