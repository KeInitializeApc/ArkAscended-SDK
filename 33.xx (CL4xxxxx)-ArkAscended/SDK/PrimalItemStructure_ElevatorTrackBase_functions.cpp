#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_ElevatorTrackBase.PrimalItemStructure_ElevatorTrackBase_C
// (None)

class UClass* UPrimalItemStructure_ElevatorTrackBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_ElevatorTrackBase_C");

	return Clss;
}


// PrimalItemStructure_ElevatorTrackBase_C PrimalItemStructure_ElevatorTrackBase.Default__PrimalItemStructure_ElevatorTrackBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_ElevatorTrackBase_C* UPrimalItemStructure_ElevatorTrackBase_C::GetDefaultObj()
{
	static class UPrimalItemStructure_ElevatorTrackBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_ElevatorTrackBase_C*>(UPrimalItemStructure_ElevatorTrackBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


