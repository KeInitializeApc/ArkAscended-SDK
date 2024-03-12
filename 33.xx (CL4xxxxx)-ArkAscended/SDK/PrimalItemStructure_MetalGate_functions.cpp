#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalGate.PrimalItemStructure_MetalGate_C
// (None)

class UClass* UPrimalItemStructure_MetalGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalGate_C");

	return Clss;
}


// PrimalItemStructure_MetalGate_C PrimalItemStructure_MetalGate.Default__PrimalItemStructure_MetalGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalGate_C* UPrimalItemStructure_MetalGate_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalGate_C*>(UPrimalItemStructure_MetalGate_C::StaticClass()->DefaultObject);

	return Default;
}

}


