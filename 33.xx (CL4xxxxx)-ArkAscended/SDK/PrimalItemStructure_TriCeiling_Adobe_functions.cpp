#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TriCeiling_Adobe.PrimalItemStructure_TriCeiling_Adobe_C
// (None)

class UClass* UPrimalItemStructure_TriCeiling_Adobe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TriCeiling_Adobe_C");

	return Clss;
}


// PrimalItemStructure_TriCeiling_Adobe_C PrimalItemStructure_TriCeiling_Adobe.Default__PrimalItemStructure_TriCeiling_Adobe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TriCeiling_Adobe_C* UPrimalItemStructure_TriCeiling_Adobe_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TriCeiling_Adobe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TriCeiling_Adobe_C*>(UPrimalItemStructure_TriCeiling_Adobe_C::StaticClass()->DefaultObject);

	return Default;
}

}


