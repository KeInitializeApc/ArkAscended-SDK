#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Parachute.EngramEntry_Parachute_C
// (None)

class UClass* UEngramEntry_Parachute_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Parachute_C");

	return Clss;
}


// EngramEntry_Parachute_C EngramEntry_Parachute.Default__EngramEntry_Parachute_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Parachute_C* UEngramEntry_Parachute_C::GetDefaultObj()
{
	static class UEngramEntry_Parachute_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Parachute_C*>(UEngramEntry_Parachute_C::StaticClass()->DefaultObject);

	return Default;
}

}


