#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_IndustrialCookingPot.EngramEntry_IndustrialCookingPot_C
// (None)

class UClass* UEngramEntry_IndustrialCookingPot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_IndustrialCookingPot_C");

	return Clss;
}


// EngramEntry_IndustrialCookingPot_C EngramEntry_IndustrialCookingPot.Default__EngramEntry_IndustrialCookingPot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_IndustrialCookingPot_C* UEngramEntry_IndustrialCookingPot_C::GetDefaultObj()
{
	static class UEngramEntry_IndustrialCookingPot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_IndustrialCookingPot_C*>(UEngramEntry_IndustrialCookingPot_C::StaticClass()->DefaultObject);

	return Default;
}

}


