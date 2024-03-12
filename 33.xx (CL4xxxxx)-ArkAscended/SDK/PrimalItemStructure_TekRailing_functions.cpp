#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekRailing.PrimalItemStructure_TekRailing_C
// (None)

class UClass* UPrimalItemStructure_TekRailing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekRailing_C");

	return Clss;
}


// PrimalItemStructure_TekRailing_C PrimalItemStructure_TekRailing.Default__PrimalItemStructure_TekRailing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekRailing_C* UPrimalItemStructure_TekRailing_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekRailing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekRailing_C*>(UPrimalItemStructure_TekRailing_C::StaticClass()->DefaultObject);

	return Default;
}

}


