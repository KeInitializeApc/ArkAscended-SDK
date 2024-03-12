#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GreenhouseCeiling.EngramEntry_GreenhouseCeiling_C
// (None)

class UClass* UEngramEntry_GreenhouseCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GreenhouseCeiling_C");

	return Clss;
}


// EngramEntry_GreenhouseCeiling_C EngramEntry_GreenhouseCeiling.Default__EngramEntry_GreenhouseCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GreenhouseCeiling_C* UEngramEntry_GreenhouseCeiling_C::GetDefaultObj()
{
	static class UEngramEntry_GreenhouseCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GreenhouseCeiling_C*>(UEngramEntry_GreenhouseCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


