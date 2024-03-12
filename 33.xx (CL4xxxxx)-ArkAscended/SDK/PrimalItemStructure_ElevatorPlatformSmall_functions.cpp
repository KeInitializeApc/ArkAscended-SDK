#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_ElevatorPlatformSmall.PrimalItemStructure_ElevatorPlatformSmall_C
// (None)

class UClass* UPrimalItemStructure_ElevatorPlatformSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_ElevatorPlatformSmall_C");

	return Clss;
}


// PrimalItemStructure_ElevatorPlatformSmall_C PrimalItemStructure_ElevatorPlatformSmall.Default__PrimalItemStructure_ElevatorPlatformSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_ElevatorPlatformSmall_C* UPrimalItemStructure_ElevatorPlatformSmall_C::GetDefaultObj()
{
	static class UPrimalItemStructure_ElevatorPlatformSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_ElevatorPlatformSmall_C*>(UPrimalItemStructure_ElevatorPlatformSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


