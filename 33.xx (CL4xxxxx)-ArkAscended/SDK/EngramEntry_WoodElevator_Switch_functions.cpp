#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodElevator_Switch.EngramEntry_WoodElevator_Switch_C
// (None)

class UClass* UEngramEntry_WoodElevator_Switch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodElevator_Switch_C");

	return Clss;
}


// EngramEntry_WoodElevator_Switch_C EngramEntry_WoodElevator_Switch.Default__EngramEntry_WoodElevator_Switch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodElevator_Switch_C* UEngramEntry_WoodElevator_Switch_C::GetDefaultObj()
{
	static class UEngramEntry_WoodElevator_Switch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodElevator_Switch_C*>(UEngramEntry_WoodElevator_Switch_C::StaticClass()->DefaultObject);

	return Default;
}

}


