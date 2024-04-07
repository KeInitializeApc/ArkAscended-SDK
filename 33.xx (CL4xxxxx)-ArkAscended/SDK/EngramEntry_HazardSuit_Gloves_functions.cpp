#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_HazardSuit_Gloves.EngramEntry_HazardSuit_Gloves_C
// (None)

class UClass* UEngramEntry_HazardSuit_Gloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_HazardSuit_Gloves_C");

	return Clss;
}


// EngramEntry_HazardSuit_Gloves_C EngramEntry_HazardSuit_Gloves.Default__EngramEntry_HazardSuit_Gloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_HazardSuit_Gloves_C* UEngramEntry_HazardSuit_Gloves_C::GetDefaultObj()
{
	static class UEngramEntry_HazardSuit_Gloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_HazardSuit_Gloves_C*>(UEngramEntry_HazardSuit_Gloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


