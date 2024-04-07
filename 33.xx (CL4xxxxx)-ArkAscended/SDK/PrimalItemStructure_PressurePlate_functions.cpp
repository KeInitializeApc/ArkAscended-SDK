#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_PressurePlate.PrimalItemStructure_PressurePlate_C
// (None)

class UClass* UPrimalItemStructure_PressurePlate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_PressurePlate_C");

	return Clss;
}


// PrimalItemStructure_PressurePlate_C PrimalItemStructure_PressurePlate.Default__PrimalItemStructure_PressurePlate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_PressurePlate_C* UPrimalItemStructure_PressurePlate_C::GetDefaultObj()
{
	static class UPrimalItemStructure_PressurePlate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_PressurePlate_C*>(UPrimalItemStructure_PressurePlate_C::StaticClass()->DefaultObject);

	return Default;
}

}


