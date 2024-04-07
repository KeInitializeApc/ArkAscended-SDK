#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_GreenhouseRoof.PrimalItemStructure_GreenhouseRoof_C
// (None)

class UClass* UPrimalItemStructure_GreenhouseRoof_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_GreenhouseRoof_C");

	return Clss;
}


// PrimalItemStructure_GreenhouseRoof_C PrimalItemStructure_GreenhouseRoof.Default__PrimalItemStructure_GreenhouseRoof_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_GreenhouseRoof_C* UPrimalItemStructure_GreenhouseRoof_C::GetDefaultObj()
{
	static class UPrimalItemStructure_GreenhouseRoof_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_GreenhouseRoof_C*>(UPrimalItemStructure_GreenhouseRoof_C::StaticClass()->DefaultObject);

	return Default;
}

}


