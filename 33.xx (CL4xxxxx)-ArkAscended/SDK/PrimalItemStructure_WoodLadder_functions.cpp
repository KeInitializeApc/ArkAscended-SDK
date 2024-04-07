#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodLadder.PrimalItemStructure_WoodLadder_C
// (None)

class UClass* UPrimalItemStructure_WoodLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodLadder_C");

	return Clss;
}


// PrimalItemStructure_WoodLadder_C PrimalItemStructure_WoodLadder.Default__PrimalItemStructure_WoodLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodLadder_C* UPrimalItemStructure_WoodLadder_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodLadder_C*>(UPrimalItemStructure_WoodLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


