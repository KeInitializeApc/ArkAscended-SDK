#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ScubaPants.EngramEntry_ScubaPants_C
// (None)

class UClass* UEngramEntry_ScubaPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ScubaPants_C");

	return Clss;
}


// EngramEntry_ScubaPants_C EngramEntry_ScubaPants.Default__EngramEntry_ScubaPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ScubaPants_C* UEngramEntry_ScubaPants_C::GetDefaultObj()
{
	static class UEngramEntry_ScubaPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ScubaPants_C*>(UEngramEntry_ScubaPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


