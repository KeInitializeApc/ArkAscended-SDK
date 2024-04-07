#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalGateframe.PrimalItemStructure_MetalGateframe_C
// (None)

class UClass* UPrimalItemStructure_MetalGateframe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalGateframe_C");

	return Clss;
}


// PrimalItemStructure_MetalGateframe_C PrimalItemStructure_MetalGateframe.Default__PrimalItemStructure_MetalGateframe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalGateframe_C* UPrimalItemStructure_MetalGateframe_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalGateframe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalGateframe_C*>(UPrimalItemStructure_MetalGateframe_C::StaticClass()->DefaultObject);

	return Default;
}

}


