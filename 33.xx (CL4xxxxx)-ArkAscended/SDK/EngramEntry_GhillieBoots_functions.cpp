#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GhillieBoots.EngramEntry_GhillieBoots_C
// (None)

class UClass* UEngramEntry_GhillieBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GhillieBoots_C");

	return Clss;
}


// EngramEntry_GhillieBoots_C EngramEntry_GhillieBoots.Default__EngramEntry_GhillieBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GhillieBoots_C* UEngramEntry_GhillieBoots_C::GetDefaultObj()
{
	static class UEngramEntry_GhillieBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GhillieBoots_C*>(UEngramEntry_GhillieBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


