#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_CatapultTurret.EngramEntry_CatapultTurret_C
// (None)

class UClass* UEngramEntry_CatapultTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_CatapultTurret_C");

	return Clss;
}


// EngramEntry_CatapultTurret_C EngramEntry_CatapultTurret.Default__EngramEntry_CatapultTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_CatapultTurret_C* UEngramEntry_CatapultTurret_C::GetDefaultObj()
{
	static class UEngramEntry_CatapultTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_CatapultTurret_C*>(UEngramEntry_CatapultTurret_C::StaticClass()->DefaultObject);

	return Default;
}

}


