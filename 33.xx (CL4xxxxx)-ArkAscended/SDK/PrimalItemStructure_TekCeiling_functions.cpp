#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekCeiling.PrimalItemStructure_TekCeiling_C
// (None)

class UClass* UPrimalItemStructure_TekCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekCeiling_C");

	return Clss;
}


// PrimalItemStructure_TekCeiling_C PrimalItemStructure_TekCeiling.Default__PrimalItemStructure_TekCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekCeiling_C* UPrimalItemStructure_TekCeiling_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekCeiling_C*>(UPrimalItemStructure_TekCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


