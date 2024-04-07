#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Fabricator.PrimalItemStructure_Fabricator_C
// (None)

class UClass* UPrimalItemStructure_Fabricator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Fabricator_C");

	return Clss;
}


// PrimalItemStructure_Fabricator_C PrimalItemStructure_Fabricator.Default__PrimalItemStructure_Fabricator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Fabricator_C* UPrimalItemStructure_Fabricator_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Fabricator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Fabricator_C*>(UPrimalItemStructure_Fabricator_C::StaticClass()->DefaultObject);

	return Default;
}

}


