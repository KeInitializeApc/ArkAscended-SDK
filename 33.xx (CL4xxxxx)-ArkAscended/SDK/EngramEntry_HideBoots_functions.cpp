#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_HideBoots.EngramEntry_HideBoots_C
// (None)

class UClass* UEngramEntry_HideBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_HideBoots_C");

	return Clss;
}


// EngramEntry_HideBoots_C EngramEntry_HideBoots.Default__EngramEntry_HideBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_HideBoots_C* UEngramEntry_HideBoots_C::GetDefaultObj()
{
	static class UEngramEntry_HideBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_HideBoots_C*>(UEngramEntry_HideBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


