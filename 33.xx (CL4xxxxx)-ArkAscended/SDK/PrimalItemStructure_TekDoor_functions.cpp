#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekDoor.PrimalItemStructure_TekDoor_C
// (None)

class UClass* UPrimalItemStructure_TekDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekDoor_C");

	return Clss;
}


// PrimalItemStructure_TekDoor_C PrimalItemStructure_TekDoor.Default__PrimalItemStructure_TekDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekDoor_C* UPrimalItemStructure_TekDoor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekDoor_C*>(UPrimalItemStructure_TekDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


