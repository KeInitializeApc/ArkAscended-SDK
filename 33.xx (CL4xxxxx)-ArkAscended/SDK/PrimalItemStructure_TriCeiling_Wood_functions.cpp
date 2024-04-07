#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TriCeiling_Wood.PrimalItemStructure_TriCeiling_Wood_C
// (None)

class UClass* UPrimalItemStructure_TriCeiling_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TriCeiling_Wood_C");

	return Clss;
}


// PrimalItemStructure_TriCeiling_Wood_C PrimalItemStructure_TriCeiling_Wood.Default__PrimalItemStructure_TriCeiling_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TriCeiling_Wood_C* UPrimalItemStructure_TriCeiling_Wood_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TriCeiling_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TriCeiling_Wood_C*>(UPrimalItemStructure_TriCeiling_Wood_C::StaticClass()->DefaultObject);

	return Default;
}

}


