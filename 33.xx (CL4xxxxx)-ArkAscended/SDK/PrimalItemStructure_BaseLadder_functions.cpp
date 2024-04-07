#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseLadder.PrimalItemStructure_BaseLadder_C
// (None)

class UClass* UPrimalItemStructure_BaseLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseLadder_C");

	return Clss;
}


// PrimalItemStructure_BaseLadder_C PrimalItemStructure_BaseLadder.Default__PrimalItemStructure_BaseLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseLadder_C* UPrimalItemStructure_BaseLadder_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseLadder_C*>(UPrimalItemStructure_BaseLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


