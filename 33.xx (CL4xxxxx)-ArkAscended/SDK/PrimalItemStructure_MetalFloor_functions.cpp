#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalFloor.PrimalItemStructure_MetalFloor_C
// (None)

class UClass* UPrimalItemStructure_MetalFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalFloor_C");

	return Clss;
}


// PrimalItemStructure_MetalFloor_C PrimalItemStructure_MetalFloor.Default__PrimalItemStructure_MetalFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalFloor_C* UPrimalItemStructure_MetalFloor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalFloor_C*>(UPrimalItemStructure_MetalFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


