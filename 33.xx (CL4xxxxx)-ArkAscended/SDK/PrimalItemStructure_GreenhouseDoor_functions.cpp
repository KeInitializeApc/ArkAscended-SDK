#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_GreenhouseDoor.PrimalItemStructure_GreenhouseDoor_C
// (None)

class UClass* UPrimalItemStructure_GreenhouseDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_GreenhouseDoor_C");

	return Clss;
}


// PrimalItemStructure_GreenhouseDoor_C PrimalItemStructure_GreenhouseDoor.Default__PrimalItemStructure_GreenhouseDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_GreenhouseDoor_C* UPrimalItemStructure_GreenhouseDoor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_GreenhouseDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_GreenhouseDoor_C*>(UPrimalItemStructure_GreenhouseDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


