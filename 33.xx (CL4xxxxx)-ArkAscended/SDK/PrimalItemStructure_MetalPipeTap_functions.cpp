#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalPipeTap.PrimalItemStructure_MetalPipeTap_C
// (None)

class UClass* UPrimalItemStructure_MetalPipeTap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalPipeTap_C");

	return Clss;
}


// PrimalItemStructure_MetalPipeTap_C PrimalItemStructure_MetalPipeTap.Default__PrimalItemStructure_MetalPipeTap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalPipeTap_C* UPrimalItemStructure_MetalPipeTap_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalPipeTap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalPipeTap_C*>(UPrimalItemStructure_MetalPipeTap_C::StaticClass()->DefaultObject);

	return Default;
}

}


