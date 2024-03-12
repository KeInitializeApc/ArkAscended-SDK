#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StoneCeilingDoorGiant.PrimalItemStructure_StoneCeilingDoorGiant_C
// (None)

class UClass* UPrimalItemStructure_StoneCeilingDoorGiant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StoneCeilingDoorGiant_C");

	return Clss;
}


// PrimalItemStructure_StoneCeilingDoorGiant_C PrimalItemStructure_StoneCeilingDoorGiant.Default__PrimalItemStructure_StoneCeilingDoorGiant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StoneCeilingDoorGiant_C* UPrimalItemStructure_StoneCeilingDoorGiant_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StoneCeilingDoorGiant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StoneCeilingDoorGiant_C*>(UPrimalItemStructure_StoneCeilingDoorGiant_C::StaticClass()->DefaultObject);

	return Default;
}

}


