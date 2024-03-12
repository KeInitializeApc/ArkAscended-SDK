#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobeFenceFoundation.PrimalItemStructure_AdobeFenceFoundation_C
// (None)

class UClass* UPrimalItemStructure_AdobeFenceFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobeFenceFoundation_C");

	return Clss;
}


// PrimalItemStructure_AdobeFenceFoundation_C PrimalItemStructure_AdobeFenceFoundation.Default__PrimalItemStructure_AdobeFenceFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobeFenceFoundation_C* UPrimalItemStructure_AdobeFenceFoundation_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobeFenceFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobeFenceFoundation_C*>(UPrimalItemStructure_AdobeFenceFoundation_C::StaticClass()->DefaultObject);

	return Default;
}

}


