#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodElevatorTopSwitch.PrimalItemStructure_WoodElevatorTopSwitch_C
// (None)

class UClass* UPrimalItemStructure_WoodElevatorTopSwitch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodElevatorTopSwitch_C");

	return Clss;
}


// PrimalItemStructure_WoodElevatorTopSwitch_C PrimalItemStructure_WoodElevatorTopSwitch.Default__PrimalItemStructure_WoodElevatorTopSwitch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodElevatorTopSwitch_C* UPrimalItemStructure_WoodElevatorTopSwitch_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodElevatorTopSwitch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodElevatorTopSwitch_C*>(UPrimalItemStructure_WoodElevatorTopSwitch_C::StaticClass()->DefaultObject);

	return Default;
}

}


