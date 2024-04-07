#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StoneLadder.PrimalItemStructure_StoneLadder_C
// (None)

class UClass* UPrimalItemStructure_StoneLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StoneLadder_C");

	return Clss;
}


// PrimalItemStructure_StoneLadder_C PrimalItemStructure_StoneLadder.Default__PrimalItemStructure_StoneLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StoneLadder_C* UPrimalItemStructure_StoneLadder_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StoneLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StoneLadder_C*>(UPrimalItemStructure_StoneLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


