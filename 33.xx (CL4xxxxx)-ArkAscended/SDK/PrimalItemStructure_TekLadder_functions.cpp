#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekLadder.PrimalItemStructure_TekLadder_C
// (None)

class UClass* UPrimalItemStructure_TekLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekLadder_C");

	return Clss;
}


// PrimalItemStructure_TekLadder_C PrimalItemStructure_TekLadder.Default__PrimalItemStructure_TekLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekLadder_C* UPrimalItemStructure_TekLadder_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekLadder_C*>(UPrimalItemStructure_TekLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


