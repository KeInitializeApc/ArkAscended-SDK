#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RocketTurret.EngramEntry_RocketTurret_C
// (None)

class UClass* UEngramEntry_RocketTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RocketTurret_C");

	return Clss;
}


// EngramEntry_RocketTurret_C EngramEntry_RocketTurret.Default__EngramEntry_RocketTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RocketTurret_C* UEngramEntry_RocketTurret_C::GetDefaultObj()
{
	static class UEngramEntry_RocketTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RocketTurret_C*>(UEngramEntry_RocketTurret_C::StaticClass()->DefaultObject);

	return Default;
}

}


