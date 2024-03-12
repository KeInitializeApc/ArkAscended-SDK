#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RocketAmmo.EngramEntry_RocketAmmo_C
// (None)

class UClass* UEngramEntry_RocketAmmo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RocketAmmo_C");

	return Clss;
}


// EngramEntry_RocketAmmo_C EngramEntry_RocketAmmo.Default__EngramEntry_RocketAmmo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RocketAmmo_C* UEngramEntry_RocketAmmo_C::GetDefaultObj()
{
	static class UEngramEntry_RocketAmmo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RocketAmmo_C*>(UEngramEntry_RocketAmmo_C::StaticClass()->DefaultObject);

	return Default;
}

}


