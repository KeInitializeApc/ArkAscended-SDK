#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalLadder.PrimalItemStructure_MetalLadder_C
// (None)

class UClass* UPrimalItemStructure_MetalLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalLadder_C");

	return Clss;
}


// PrimalItemStructure_MetalLadder_C PrimalItemStructure_MetalLadder.Default__PrimalItemStructure_MetalLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalLadder_C* UPrimalItemStructure_MetalLadder_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalLadder_C*>(UPrimalItemStructure_MetalLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


