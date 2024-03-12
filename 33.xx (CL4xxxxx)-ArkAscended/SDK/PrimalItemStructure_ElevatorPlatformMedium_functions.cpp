#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_ElevatorPlatformMedium.PrimalItemStructure_ElevatorPlatformMedium_C
// (None)

class UClass* UPrimalItemStructure_ElevatorPlatformMedium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_ElevatorPlatformMedium_C");

	return Clss;
}


// PrimalItemStructure_ElevatorPlatformMedium_C PrimalItemStructure_ElevatorPlatformMedium.Default__PrimalItemStructure_ElevatorPlatformMedium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_ElevatorPlatformMedium_C* UPrimalItemStructure_ElevatorPlatformMedium_C::GetDefaultObj()
{
	static class UPrimalItemStructure_ElevatorPlatformMedium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_ElevatorPlatformMedium_C*>(UPrimalItemStructure_ElevatorPlatformMedium_C::StaticClass()->DefaultObject);

	return Default;
}

}


