#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_IndustrialCookingPot.PrimalItemStructure_IndustrialCookingPot_C
// (None)

class UClass* UPrimalItemStructure_IndustrialCookingPot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_IndustrialCookingPot_C");

	return Clss;
}


// PrimalItemStructure_IndustrialCookingPot_C PrimalItemStructure_IndustrialCookingPot.Default__PrimalItemStructure_IndustrialCookingPot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_IndustrialCookingPot_C* UPrimalItemStructure_IndustrialCookingPot_C::GetDefaultObj()
{
	static class UPrimalItemStructure_IndustrialCookingPot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_IndustrialCookingPot_C*>(UPrimalItemStructure_IndustrialCookingPot_C::StaticClass()->DefaultObject);

	return Default;
}

}


