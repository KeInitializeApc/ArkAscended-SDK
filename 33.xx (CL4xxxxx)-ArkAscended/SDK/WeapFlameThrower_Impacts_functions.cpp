#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapFlameThrower_Impacts.WeapFlameThrower_Impacts_C
// (Actor)

class UClass* AWeapFlameThrower_Impacts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapFlameThrower_Impacts_C");

	return Clss;
}


// WeapFlameThrower_Impacts_C WeapFlameThrower_Impacts.Default__WeapFlameThrower_Impacts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapFlameThrower_Impacts_C* AWeapFlameThrower_Impacts_C::GetDefaultObj()
{
	static class AWeapFlameThrower_Impacts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapFlameThrower_Impacts_C*>(AWeapFlameThrower_Impacts_C::StaticClass()->DefaultObject);

	return Default;
}

}


