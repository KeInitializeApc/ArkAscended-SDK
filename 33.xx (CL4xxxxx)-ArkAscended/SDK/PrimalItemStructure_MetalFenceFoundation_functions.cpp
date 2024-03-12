#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalFenceFoundation.PrimalItemStructure_MetalFenceFoundation_C
// (None)

class UClass* UPrimalItemStructure_MetalFenceFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalFenceFoundation_C");

	return Clss;
}


// PrimalItemStructure_MetalFenceFoundation_C PrimalItemStructure_MetalFenceFoundation.Default__PrimalItemStructure_MetalFenceFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalFenceFoundation_C* UPrimalItemStructure_MetalFenceFoundation_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalFenceFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalFenceFoundation_C*>(UPrimalItemStructure_MetalFenceFoundation_C::StaticClass()->DefaultObject);

	return Default;
}

}


