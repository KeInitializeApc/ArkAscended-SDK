#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_ThatchCeiling.PrimalItemStructure_ThatchCeiling_C
// (None)

class UClass* UPrimalItemStructure_ThatchCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_ThatchCeiling_C");

	return Clss;
}


// PrimalItemStructure_ThatchCeiling_C PrimalItemStructure_ThatchCeiling.Default__PrimalItemStructure_ThatchCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_ThatchCeiling_C* UPrimalItemStructure_ThatchCeiling_C::GetDefaultObj()
{
	static class UPrimalItemStructure_ThatchCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_ThatchCeiling_C*>(UPrimalItemStructure_ThatchCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


