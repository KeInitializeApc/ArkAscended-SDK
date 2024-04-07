#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodSpikeWall.PrimalItemStructure_WoodSpikeWall_C
// (None)

class UClass* UPrimalItemStructure_WoodSpikeWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodSpikeWall_C");

	return Clss;
}


// PrimalItemStructure_WoodSpikeWall_C PrimalItemStructure_WoodSpikeWall.Default__PrimalItemStructure_WoodSpikeWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodSpikeWall_C* UPrimalItemStructure_WoodSpikeWall_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodSpikeWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodSpikeWall_C*>(UPrimalItemStructure_WoodSpikeWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


