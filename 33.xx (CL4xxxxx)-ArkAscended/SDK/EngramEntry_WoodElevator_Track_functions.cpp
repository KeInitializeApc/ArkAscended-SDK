#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodElevator_Track.EngramEntry_WoodElevator_Track_C
// (None)

class UClass* UEngramEntry_WoodElevator_Track_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodElevator_Track_C");

	return Clss;
}


// EngramEntry_WoodElevator_Track_C EngramEntry_WoodElevator_Track.Default__EngramEntry_WoodElevator_Track_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodElevator_Track_C* UEngramEntry_WoodElevator_Track_C::GetDefaultObj()
{
	static class UEngramEntry_WoodElevator_Track_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodElevator_Track_C*>(UEngramEntry_WoodElevator_Track_C::StaticClass()->DefaultObject);

	return Default;
}

}


