#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ElevatorPlatformMedium.EngramEntry_ElevatorPlatformMedium_C
// (None)

class UClass* UEngramEntry_ElevatorPlatformMedium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ElevatorPlatformMedium_C");

	return Clss;
}


// EngramEntry_ElevatorPlatformMedium_C EngramEntry_ElevatorPlatformMedium.Default__EngramEntry_ElevatorPlatformMedium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ElevatorPlatformMedium_C* UEngramEntry_ElevatorPlatformMedium_C::GetDefaultObj()
{
	static class UEngramEntry_ElevatorPlatformMedium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ElevatorPlatformMedium_C*>(UEngramEntry_ElevatorPlatformMedium_C::StaticClass()->DefaultObject);

	return Default;
}

}


