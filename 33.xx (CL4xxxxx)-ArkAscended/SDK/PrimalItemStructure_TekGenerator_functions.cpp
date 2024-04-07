#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekGenerator.PrimalItemStructure_TekGenerator_C
// (None)

class UClass* UPrimalItemStructure_TekGenerator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekGenerator_C");

	return Clss;
}


// PrimalItemStructure_TekGenerator_C PrimalItemStructure_TekGenerator.Default__PrimalItemStructure_TekGenerator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekGenerator_C* UPrimalItemStructure_TekGenerator_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekGenerator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekGenerator_C*>(UPrimalItemStructure_TekGenerator_C::StaticClass()->DefaultObject);

	return Default;
}

}


