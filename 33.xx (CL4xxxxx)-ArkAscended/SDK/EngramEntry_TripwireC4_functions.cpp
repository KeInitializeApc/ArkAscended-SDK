#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TripwireC4.EngramEntry_TripwireC4_C
// (None)

class UClass* UEngramEntry_TripwireC4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TripwireC4_C");

	return Clss;
}


// EngramEntry_TripwireC4_C EngramEntry_TripwireC4.Default__EngramEntry_TripwireC4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TripwireC4_C* UEngramEntry_TripwireC4_C::GetDefaultObj()
{
	static class UEngramEntry_TripwireC4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TripwireC4_C*>(UEngramEntry_TripwireC4_C::StaticClass()->DefaultObject);

	return Default;
}

}


