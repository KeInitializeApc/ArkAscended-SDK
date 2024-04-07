#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapGPS.WeapGPS_C
// (Actor)

class UClass* AWeapGPS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapGPS_C");

	return Clss;
}


// WeapGPS_C WeapGPS.Default__WeapGPS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapGPS_C* AWeapGPS_C::GetDefaultObj()
{
	static class AWeapGPS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapGPS_C*>(AWeapGPS_C::StaticClass()->DefaultObject);

	return Default;
}

}


