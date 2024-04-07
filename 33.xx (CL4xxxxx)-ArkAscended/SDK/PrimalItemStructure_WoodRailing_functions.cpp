#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodRailing.PrimalItemStructure_WoodRailing_C
// (None)

class UClass* UPrimalItemStructure_WoodRailing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodRailing_C");

	return Clss;
}


// PrimalItemStructure_WoodRailing_C PrimalItemStructure_WoodRailing.Default__PrimalItemStructure_WoodRailing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodRailing_C* UPrimalItemStructure_WoodRailing_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodRailing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodRailing_C*>(UPrimalItemStructure_WoodRailing_C::StaticClass()->DefaultObject);

	return Default;
}

}


