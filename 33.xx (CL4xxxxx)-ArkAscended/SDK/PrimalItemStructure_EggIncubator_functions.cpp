#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_EggIncubator.PrimalItemStructure_EggIncubator_C
// (None)

class UClass* UPrimalItemStructure_EggIncubator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_EggIncubator_C");

	return Clss;
}


// PrimalItemStructure_EggIncubator_C PrimalItemStructure_EggIncubator.Default__PrimalItemStructure_EggIncubator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_EggIncubator_C* UPrimalItemStructure_EggIncubator_C::GetDefaultObj()
{
	static class UPrimalItemStructure_EggIncubator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_EggIncubator_C*>(UPrimalItemStructure_EggIncubator_C::StaticClass()->DefaultObject);

	return Default;
}

}


