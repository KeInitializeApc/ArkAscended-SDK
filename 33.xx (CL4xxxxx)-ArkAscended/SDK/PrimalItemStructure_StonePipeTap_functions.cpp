#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StonePipeTap.PrimalItemStructure_StonePipeTap_C
// (None)

class UClass* UPrimalItemStructure_StonePipeTap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StonePipeTap_C");

	return Clss;
}


// PrimalItemStructure_StonePipeTap_C PrimalItemStructure_StonePipeTap.Default__PrimalItemStructure_StonePipeTap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StonePipeTap_C* UPrimalItemStructure_StonePipeTap_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StonePipeTap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StonePipeTap_C*>(UPrimalItemStructure_StonePipeTap_C::StaticClass()->DefaultObject);

	return Default;
}

}


