#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekBoots.EngramEntry_TekBoots_C
// (None)

class UClass* UEngramEntry_TekBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekBoots_C");

	return Clss;
}


// EngramEntry_TekBoots_C EngramEntry_TekBoots.Default__EngramEntry_TekBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekBoots_C* UEngramEntry_TekBoots_C::GetDefaultObj()
{
	static class UEngramEntry_TekBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekBoots_C*>(UEngramEntry_TekBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


