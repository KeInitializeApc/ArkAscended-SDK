#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C
// (Actor)

class UClass* ADeathItemCache_PlayerDeath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeathItemCache_PlayerDeath_C");

	return Clss;
}


// DeathItemCache_PlayerDeath_C DeathItemCache_PlayerDeath.Default__DeathItemCache_PlayerDeath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADeathItemCache_PlayerDeath_C* ADeathItemCache_PlayerDeath_C::GetDefaultObj()
{
	static class ADeathItemCache_PlayerDeath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADeathItemCache_PlayerDeath_C*>(ADeathItemCache_PlayerDeath_C::StaticClass()->DefaultObject);

	return Default;
}

}


