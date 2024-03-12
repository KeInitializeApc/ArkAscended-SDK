#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodCeilingDoorGiant.PrimalItemStructure_WoodCeilingDoorGiant_C
// (None)

class UClass* UPrimalItemStructure_WoodCeilingDoorGiant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodCeilingDoorGiant_C");

	return Clss;
}


// PrimalItemStructure_WoodCeilingDoorGiant_C PrimalItemStructure_WoodCeilingDoorGiant.Default__PrimalItemStructure_WoodCeilingDoorGiant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodCeilingDoorGiant_C* UPrimalItemStructure_WoodCeilingDoorGiant_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodCeilingDoorGiant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodCeilingDoorGiant_C*>(UPrimalItemStructure_WoodCeilingDoorGiant_C::StaticClass()->DefaultObject);

	return Default;
}

}


