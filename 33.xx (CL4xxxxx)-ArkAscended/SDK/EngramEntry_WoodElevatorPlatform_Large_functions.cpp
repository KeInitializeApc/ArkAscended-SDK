#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodElevatorPlatform_Large.EngramEntry_WoodElevatorPlatform_Large_C
// (None)

class UClass* UEngramEntry_WoodElevatorPlatform_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodElevatorPlatform_Large_C");

	return Clss;
}


// EngramEntry_WoodElevatorPlatform_Large_C EngramEntry_WoodElevatorPlatform_Large.Default__EngramEntry_WoodElevatorPlatform_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodElevatorPlatform_Large_C* UEngramEntry_WoodElevatorPlatform_Large_C::GetDefaultObj()
{
	static class UEngramEntry_WoodElevatorPlatform_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodElevatorPlatform_Large_C*>(UEngramEntry_WoodElevatorPlatform_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


