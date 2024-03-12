#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_PowerGenerator.PrimalItemStructure_PowerGenerator_C
// (None)

class UClass* UPrimalItemStructure_PowerGenerator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_PowerGenerator_C");

	return Clss;
}


// PrimalItemStructure_PowerGenerator_C PrimalItemStructure_PowerGenerator.Default__PrimalItemStructure_PowerGenerator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_PowerGenerator_C* UPrimalItemStructure_PowerGenerator_C::GetDefaultObj()
{
	static class UPrimalItemStructure_PowerGenerator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_PowerGenerator_C*>(UPrimalItemStructure_PowerGenerator_C::StaticClass()->DefaultObject);

	return Default;
}

}


