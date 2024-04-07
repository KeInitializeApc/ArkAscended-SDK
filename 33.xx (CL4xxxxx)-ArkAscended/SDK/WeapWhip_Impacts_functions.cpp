#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapWhip_Impacts.WeapWhip_Impacts_C
// (Actor)

class UClass* AWeapWhip_Impacts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapWhip_Impacts_C");

	return Clss;
}


// WeapWhip_Impacts_C WeapWhip_Impacts.Default__WeapWhip_Impacts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapWhip_Impacts_C* AWeapWhip_Impacts_C::GetDefaultObj()
{
	static class AWeapWhip_Impacts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapWhip_Impacts_C*>(AWeapWhip_Impacts_C::StaticClass()->DefaultObject);

	return Default;
}

}


