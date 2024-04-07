#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalCeiling.PrimalItemStructure_MetalCeiling_C
// (None)

class UClass* UPrimalItemStructure_MetalCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalCeiling_C");

	return Clss;
}


// PrimalItemStructure_MetalCeiling_C PrimalItemStructure_MetalCeiling.Default__PrimalItemStructure_MetalCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalCeiling_C* UPrimalItemStructure_MetalCeiling_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalCeiling_C*>(UPrimalItemStructure_MetalCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


