#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TriCeiling_Tek.PrimalItemStructure_TriCeiling_Tek_C
// (None)

class UClass* UPrimalItemStructure_TriCeiling_Tek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TriCeiling_Tek_C");

	return Clss;
}


// PrimalItemStructure_TriCeiling_Tek_C PrimalItemStructure_TriCeiling_Tek.Default__PrimalItemStructure_TriCeiling_Tek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TriCeiling_Tek_C* UPrimalItemStructure_TriCeiling_Tek_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TriCeiling_Tek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TriCeiling_Tek_C*>(UPrimalItemStructure_TriCeiling_Tek_C::StaticClass()->DefaultObject);

	return Default;
}

}


