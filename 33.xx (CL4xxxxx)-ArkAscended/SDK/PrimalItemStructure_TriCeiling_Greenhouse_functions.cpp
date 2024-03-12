#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TriCeiling_Greenhouse.PrimalItemStructure_TriCeiling_Greenhouse_C
// (None)

class UClass* UPrimalItemStructure_TriCeiling_Greenhouse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TriCeiling_Greenhouse_C");

	return Clss;
}


// PrimalItemStructure_TriCeiling_Greenhouse_C PrimalItemStructure_TriCeiling_Greenhouse.Default__PrimalItemStructure_TriCeiling_Greenhouse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TriCeiling_Greenhouse_C* UPrimalItemStructure_TriCeiling_Greenhouse_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TriCeiling_Greenhouse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TriCeiling_Greenhouse_C*>(UPrimalItemStructure_TriCeiling_Greenhouse_C::StaticClass()->DefaultObject);

	return Default;
}

}


