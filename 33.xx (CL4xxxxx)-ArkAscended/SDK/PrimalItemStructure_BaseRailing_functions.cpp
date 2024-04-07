#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseRailing.PrimalItemStructure_BaseRailing_C
// (None)

class UClass* UPrimalItemStructure_BaseRailing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseRailing_C");

	return Clss;
}


// PrimalItemStructure_BaseRailing_C PrimalItemStructure_BaseRailing.Default__PrimalItemStructure_BaseRailing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseRailing_C* UPrimalItemStructure_BaseRailing_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseRailing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseRailing_C*>(UPrimalItemStructure_BaseRailing_C::StaticClass()->DefaultObject);

	return Default;
}

}


