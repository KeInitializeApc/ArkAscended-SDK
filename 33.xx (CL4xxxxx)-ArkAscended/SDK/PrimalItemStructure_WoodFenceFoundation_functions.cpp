#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodFenceFoundation.PrimalItemStructure_WoodFenceFoundation_C
// (None)

class UClass* UPrimalItemStructure_WoodFenceFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodFenceFoundation_C");

	return Clss;
}


// PrimalItemStructure_WoodFenceFoundation_C PrimalItemStructure_WoodFenceFoundation.Default__PrimalItemStructure_WoodFenceFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodFenceFoundation_C* UPrimalItemStructure_WoodFenceFoundation_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodFenceFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodFenceFoundation_C*>(UPrimalItemStructure_WoodFenceFoundation_C::StaticClass()->DefaultObject);

	return Default;
}

}


