#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_ThatchDoor.PrimalItemStructure_ThatchDoor_C
// (None)

class UClass* UPrimalItemStructure_ThatchDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_ThatchDoor_C");

	return Clss;
}


// PrimalItemStructure_ThatchDoor_C PrimalItemStructure_ThatchDoor.Default__PrimalItemStructure_ThatchDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_ThatchDoor_C* UPrimalItemStructure_ThatchDoor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_ThatchDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_ThatchDoor_C*>(UPrimalItemStructure_ThatchDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


