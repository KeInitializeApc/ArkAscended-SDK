#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekFenceFoundation.PrimalItemStructure_TekFenceFoundation_C
// (None)

class UClass* UPrimalItemStructure_TekFenceFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekFenceFoundation_C");

	return Clss;
}


// PrimalItemStructure_TekFenceFoundation_C PrimalItemStructure_TekFenceFoundation.Default__PrimalItemStructure_TekFenceFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekFenceFoundation_C* UPrimalItemStructure_TekFenceFoundation_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekFenceFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekFenceFoundation_C*>(UPrimalItemStructure_TekFenceFoundation_C::StaticClass()->DefaultObject);

	return Default;
}

}


