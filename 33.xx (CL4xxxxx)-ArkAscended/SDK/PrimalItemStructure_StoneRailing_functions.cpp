#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StoneRailing.PrimalItemStructure_StoneRailing_C
// (None)

class UClass* UPrimalItemStructure_StoneRailing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StoneRailing_C");

	return Clss;
}


// PrimalItemStructure_StoneRailing_C PrimalItemStructure_StoneRailing.Default__PrimalItemStructure_StoneRailing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StoneRailing_C* UPrimalItemStructure_StoneRailing_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StoneRailing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StoneRailing_C*>(UPrimalItemStructure_StoneRailing_C::StaticClass()->DefaultObject);

	return Default;
}

}


