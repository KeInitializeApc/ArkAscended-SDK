#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodElevatorPlatform_Large.PrimalItemStructure_WoodElevatorPlatform_Large_C
// (None)

class UClass* UPrimalItemStructure_WoodElevatorPlatform_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodElevatorPlatform_Large_C");

	return Clss;
}


// PrimalItemStructure_WoodElevatorPlatform_Large_C PrimalItemStructure_WoodElevatorPlatform_Large.Default__PrimalItemStructure_WoodElevatorPlatform_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodElevatorPlatform_Large_C* UPrimalItemStructure_WoodElevatorPlatform_Large_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodElevatorPlatform_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodElevatorPlatform_Large_C*>(UPrimalItemStructure_WoodElevatorPlatform_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


