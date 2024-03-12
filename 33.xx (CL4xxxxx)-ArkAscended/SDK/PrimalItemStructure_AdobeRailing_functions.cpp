#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobeRailing.PrimalItemStructure_AdobeRailing_C
// (None)

class UClass* UPrimalItemStructure_AdobeRailing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobeRailing_C");

	return Clss;
}


// PrimalItemStructure_AdobeRailing_C PrimalItemStructure_AdobeRailing.Default__PrimalItemStructure_AdobeRailing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobeRailing_C* UPrimalItemStructure_AdobeRailing_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobeRailing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobeRailing_C*>(UPrimalItemStructure_AdobeRailing_C::StaticClass()->DefaultObject);

	return Default;
}

}


