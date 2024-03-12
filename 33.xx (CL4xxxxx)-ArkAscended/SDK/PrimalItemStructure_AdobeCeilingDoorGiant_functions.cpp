#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobeCeilingDoorGiant.PrimalItemStructure_AdobeCeilingDoorGiant_C
// (None)

class UClass* UPrimalItemStructure_AdobeCeilingDoorGiant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobeCeilingDoorGiant_C");

	return Clss;
}


// PrimalItemStructure_AdobeCeilingDoorGiant_C PrimalItemStructure_AdobeCeilingDoorGiant.Default__PrimalItemStructure_AdobeCeilingDoorGiant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobeCeilingDoorGiant_C* UPrimalItemStructure_AdobeCeilingDoorGiant_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobeCeilingDoorGiant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobeCeilingDoorGiant_C*>(UPrimalItemStructure_AdobeCeilingDoorGiant_C::StaticClass()->DefaultObject);

	return Default;
}

}


