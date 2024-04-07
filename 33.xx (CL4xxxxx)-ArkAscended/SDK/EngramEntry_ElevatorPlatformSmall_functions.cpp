#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ElevatorPlatformSmall.EngramEntry_ElevatorPlatformSmall_C
// (None)

class UClass* UEngramEntry_ElevatorPlatformSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ElevatorPlatformSmall_C");

	return Clss;
}


// EngramEntry_ElevatorPlatformSmall_C EngramEntry_ElevatorPlatformSmall.Default__EngramEntry_ElevatorPlatformSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ElevatorPlatformSmall_C* UEngramEntry_ElevatorPlatformSmall_C::GetDefaultObj()
{
	static class UEngramEntry_ElevatorPlatformSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ElevatorPlatformSmall_C*>(UEngramEntry_ElevatorPlatformSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


