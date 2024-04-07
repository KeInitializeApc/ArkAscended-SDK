#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_ElevatorPlatformLarge.PrimalItemStructure_ElevatorPlatformLarge_C
// (None)

class UClass* UPrimalItemStructure_ElevatorPlatformLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_ElevatorPlatformLarge_C");

	return Clss;
}


// PrimalItemStructure_ElevatorPlatformLarge_C PrimalItemStructure_ElevatorPlatformLarge.Default__PrimalItemStructure_ElevatorPlatformLarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_ElevatorPlatformLarge_C* UPrimalItemStructure_ElevatorPlatformLarge_C::GetDefaultObj()
{
	static class UPrimalItemStructure_ElevatorPlatformLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_ElevatorPlatformLarge_C*>(UPrimalItemStructure_ElevatorPlatformLarge_C::StaticClass()->DefaultObject);

	return Default;
}

}


