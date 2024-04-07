#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ScubaBoots_Flippers.EngramEntry_ScubaBoots_Flippers_C
// (None)

class UClass* UEngramEntry_ScubaBoots_Flippers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ScubaBoots_Flippers_C");

	return Clss;
}


// EngramEntry_ScubaBoots_Flippers_C EngramEntry_ScubaBoots_Flippers.Default__EngramEntry_ScubaBoots_Flippers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ScubaBoots_Flippers_C* UEngramEntry_ScubaBoots_Flippers_C::GetDefaultObj()
{
	static class UEngramEntry_ScubaBoots_Flippers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ScubaBoots_Flippers_C*>(UEngramEntry_ScubaBoots_Flippers_C::StaticClass()->DefaultObject);

	return Default;
}

}


