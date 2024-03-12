#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RocketHommingAmmo.EngramEntry_RocketHommingAmmo_C
// (None)

class UClass* UEngramEntry_RocketHommingAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RocketHommingAmmo_C");

	return Clss;
}


// EngramEntry_RocketHommingAmmo_C EngramEntry_RocketHommingAmmo.Default__EngramEntry_RocketHommingAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RocketHommingAmmo_C* UEngramEntry_RocketHommingAmmo_C::GetDefaultObj()
{
	static class UEngramEntry_RocketHommingAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RocketHommingAmmo_C*>(UEngramEntry_RocketHommingAmmo_C::StaticClass()->DefaultObject);

	return Default;
}

}


