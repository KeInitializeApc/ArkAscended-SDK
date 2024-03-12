#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalPillar.PrimalItemStructure_MetalPillar_C
// (None)

class UClass* UPrimalItemStructure_MetalPillar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalPillar_C");

	return Clss;
}


// PrimalItemStructure_MetalPillar_C PrimalItemStructure_MetalPillar.Default__PrimalItemStructure_MetalPillar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalPillar_C* UPrimalItemStructure_MetalPillar_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalPillar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalPillar_C*>(UPrimalItemStructure_MetalPillar_C::StaticClass()->DefaultObject);

	return Default;
}

}


