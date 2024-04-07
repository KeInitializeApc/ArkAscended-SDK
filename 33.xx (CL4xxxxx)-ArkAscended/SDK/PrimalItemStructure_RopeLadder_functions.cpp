#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_RopeLadder.PrimalItemStructure_RopeLadder_C
// (None)

class UClass* UPrimalItemStructure_RopeLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_RopeLadder_C");

	return Clss;
}


// PrimalItemStructure_RopeLadder_C PrimalItemStructure_RopeLadder.Default__PrimalItemStructure_RopeLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_RopeLadder_C* UPrimalItemStructure_RopeLadder_C::GetDefaultObj()
{
	static class UPrimalItemStructure_RopeLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_RopeLadder_C*>(UPrimalItemStructure_RopeLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


