#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodDoor.PrimalItemStructure_WoodDoor_C
// (None)

class UClass* UPrimalItemStructure_WoodDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodDoor_C");

	return Clss;
}


// PrimalItemStructure_WoodDoor_C PrimalItemStructure_WoodDoor.Default__PrimalItemStructure_WoodDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodDoor_C* UPrimalItemStructure_WoodDoor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodDoor_C*>(UPrimalItemStructure_WoodDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


