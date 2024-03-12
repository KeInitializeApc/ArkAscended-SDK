#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_ElevatorPlatformBase.PrimalItemStructure_ElevatorPlatformBase_C
// (None)

class UClass* UPrimalItemStructure_ElevatorPlatformBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_ElevatorPlatformBase_C");

	return Clss;
}


// PrimalItemStructure_ElevatorPlatformBase_C PrimalItemStructure_ElevatorPlatformBase.Default__PrimalItemStructure_ElevatorPlatformBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_ElevatorPlatformBase_C* UPrimalItemStructure_ElevatorPlatformBase_C::GetDefaultObj()
{
	static class UPrimalItemStructure_ElevatorPlatformBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_ElevatorPlatformBase_C*>(UPrimalItemStructure_ElevatorPlatformBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


