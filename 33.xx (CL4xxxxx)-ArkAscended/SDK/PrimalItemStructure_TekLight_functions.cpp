#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekLight.PrimalItemStructure_TekLight_C
// (None)

class UClass* UPrimalItemStructure_TekLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekLight_C");

	return Clss;
}


// PrimalItemStructure_TekLight_C PrimalItemStructure_TekLight.Default__PrimalItemStructure_TekLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekLight_C* UPrimalItemStructure_TekLight_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekLight_C*>(UPrimalItemStructure_TekLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


