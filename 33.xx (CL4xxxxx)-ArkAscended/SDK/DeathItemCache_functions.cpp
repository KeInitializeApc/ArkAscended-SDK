#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DeathItemCache.DeathItemCache_C
// (Actor)

class UClass* ADeathItemCache_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeathItemCache_C");

	return Clss;
}


// DeathItemCache_C DeathItemCache.Default__DeathItemCache_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADeathItemCache_C* ADeathItemCache_C::GetDefaultObj()
{
	static class ADeathItemCache_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADeathItemCache_C*>(ADeathItemCache_C::StaticClass()->DefaultObject);

	return Default;
}

}


