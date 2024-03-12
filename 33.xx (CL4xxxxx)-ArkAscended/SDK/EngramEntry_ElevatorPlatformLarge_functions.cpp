#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ElevatorPlatformLarge.EngramEntry_ElevatorPlatformLarge_C
// (None)

class UClass* UEngramEntry_ElevatorPlatformLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ElevatorPlatformLarge_C");

	return Clss;
}


// EngramEntry_ElevatorPlatformLarge_C EngramEntry_ElevatorPlatformLarge.Default__EngramEntry_ElevatorPlatformLarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ElevatorPlatformLarge_C* UEngramEntry_ElevatorPlatformLarge_C::GetDefaultObj()
{
	static class UEngramEntry_ElevatorPlatformLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ElevatorPlatformLarge_C*>(UEngramEntry_ElevatorPlatformLarge_C::StaticClass()->DefaultObject);

	return Default;
}

}


