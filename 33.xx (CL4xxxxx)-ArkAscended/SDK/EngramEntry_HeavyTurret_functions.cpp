#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_HeavyTurret.EngramEntry_HeavyTurret_C
// (None)

class UClass* UEngramEntry_HeavyTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_HeavyTurret_C");

	return Clss;
}


// EngramEntry_HeavyTurret_C EngramEntry_HeavyTurret.Default__EngramEntry_HeavyTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_HeavyTurret_C* UEngramEntry_HeavyTurret_C::GetDefaultObj()
{
	static class UEngramEntry_HeavyTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_HeavyTurret_C*>(UEngramEntry_HeavyTurret_C::StaticClass()->DefaultObject);

	return Default;
}

}


