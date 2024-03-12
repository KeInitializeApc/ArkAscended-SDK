#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalSpikeWall.PrimalItemStructure_MetalSpikeWall_C
// (None)

class UClass* UPrimalItemStructure_MetalSpikeWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalSpikeWall_C");

	return Clss;
}


// PrimalItemStructure_MetalSpikeWall_C PrimalItemStructure_MetalSpikeWall.Default__PrimalItemStructure_MetalSpikeWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalSpikeWall_C* UPrimalItemStructure_MetalSpikeWall_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalSpikeWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalSpikeWall_C*>(UPrimalItemStructure_MetalSpikeWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


