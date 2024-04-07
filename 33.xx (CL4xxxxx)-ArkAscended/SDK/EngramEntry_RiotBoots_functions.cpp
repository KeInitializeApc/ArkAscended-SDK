#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RiotBoots.EngramEntry_RiotBoots_C
// (None)

class UClass* UEngramEntry_RiotBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RiotBoots_C");

	return Clss;
}


// EngramEntry_RiotBoots_C EngramEntry_RiotBoots.Default__EngramEntry_RiotBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RiotBoots_C* UEngramEntry_RiotBoots_C::GetDefaultObj()
{
	static class UEngramEntry_RiotBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RiotBoots_C*>(UEngramEntry_RiotBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


