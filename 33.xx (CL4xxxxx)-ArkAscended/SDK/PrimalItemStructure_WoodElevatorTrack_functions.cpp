#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodElevatorTrack.PrimalItemStructure_WoodElevatorTrack_C
// (None)

class UClass* UPrimalItemStructure_WoodElevatorTrack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodElevatorTrack_C");

	return Clss;
}


// PrimalItemStructure_WoodElevatorTrack_C PrimalItemStructure_WoodElevatorTrack.Default__PrimalItemStructure_WoodElevatorTrack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodElevatorTrack_C* UPrimalItemStructure_WoodElevatorTrack_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodElevatorTrack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodElevatorTrack_C*>(UPrimalItemStructure_WoodElevatorTrack_C::StaticClass()->DefaultObject);

	return Default;
}

}


