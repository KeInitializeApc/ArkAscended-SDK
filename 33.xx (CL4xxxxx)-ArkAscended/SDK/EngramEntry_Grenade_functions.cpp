#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Grenade.EngramEntry_Grenade_C
// (None)

class UClass* UEngramEntry_Grenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Grenade_C");

	return Clss;
}


// EngramEntry_Grenade_C EngramEntry_Grenade.Default__EngramEntry_Grenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Grenade_C* UEngramEntry_Grenade_C::GetDefaultObj()
{
	static class UEngramEntry_Grenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Grenade_C*>(UEngramEntry_Grenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


