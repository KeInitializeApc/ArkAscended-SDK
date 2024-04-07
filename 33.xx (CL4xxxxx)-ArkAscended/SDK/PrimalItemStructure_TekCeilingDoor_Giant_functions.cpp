#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekCeilingDoor_Giant.PrimalItemStructure_TekCeilingDoor_Giant_C
// (None)

class UClass* UPrimalItemStructure_TekCeilingDoor_Giant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekCeilingDoor_Giant_C");

	return Clss;
}


// PrimalItemStructure_TekCeilingDoor_Giant_C PrimalItemStructure_TekCeilingDoor_Giant.Default__PrimalItemStructure_TekCeilingDoor_Giant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekCeilingDoor_Giant_C* UPrimalItemStructure_TekCeilingDoor_Giant_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekCeilingDoor_Giant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekCeilingDoor_Giant_C*>(UPrimalItemStructure_TekCeilingDoor_Giant_C::StaticClass()->DefaultObject);

	return Default;
}

}


