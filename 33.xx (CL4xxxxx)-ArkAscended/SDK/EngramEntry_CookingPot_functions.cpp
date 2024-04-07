#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_CookingPot.EngramEntry_CookingPot_C
// (None)

class UClass* UEngramEntry_CookingPot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_CookingPot_C");

	return Clss;
}


// EngramEntry_CookingPot_C EngramEntry_CookingPot.Default__EngramEntry_CookingPot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_CookingPot_C* UEngramEntry_CookingPot_C::GetDefaultObj()
{
	static class UEngramEntry_CookingPot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_CookingPot_C*>(UEngramEntry_CookingPot_C::StaticClass()->DefaultObject);

	return Default;
}

}


