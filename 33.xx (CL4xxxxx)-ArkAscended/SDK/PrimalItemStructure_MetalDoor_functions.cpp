#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalDoor.PrimalItemStructure_MetalDoor_C
// (None)

class UClass* UPrimalItemStructure_MetalDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalDoor_C");

	return Clss;
}


// PrimalItemStructure_MetalDoor_C PrimalItemStructure_MetalDoor.Default__PrimalItemStructure_MetalDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalDoor_C* UPrimalItemStructure_MetalDoor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalDoor_C*>(UPrimalItemStructure_MetalDoor_C::StaticClass()->DefaultObject);

	return Default;
}

}


