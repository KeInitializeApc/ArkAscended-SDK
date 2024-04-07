#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapGun_Impacts.WeapGun_Impacts_C
// (Actor)

class UClass* AWeapGun_Impacts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapGun_Impacts_C");

	return Clss;
}


// WeapGun_Impacts_C WeapGun_Impacts.Default__WeapGun_Impacts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapGun_Impacts_C* AWeapGun_Impacts_C::GetDefaultObj()
{
	static class AWeapGun_Impacts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapGun_Impacts_C*>(AWeapGun_Impacts_C::StaticClass()->DefaultObject);

	return Default;
}

}


