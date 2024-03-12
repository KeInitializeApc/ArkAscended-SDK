#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodElevatorPlatform_Medium.EngramEntry_WoodElevatorPlatform_Medium_C
// (None)

class UClass* UEngramEntry_WoodElevatorPlatform_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodElevatorPlatform_Medium_C");

	return Clss;
}


// EngramEntry_WoodElevatorPlatform_Medium_C EngramEntry_WoodElevatorPlatform_Medium.Default__EngramEntry_WoodElevatorPlatform_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodElevatorPlatform_Medium_C* UEngramEntry_WoodElevatorPlatform_Medium_C::GetDefaultObj()
{
	static class UEngramEntry_WoodElevatorPlatform_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodElevatorPlatform_Medium_C*>(UEngramEntry_WoodElevatorPlatform_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


