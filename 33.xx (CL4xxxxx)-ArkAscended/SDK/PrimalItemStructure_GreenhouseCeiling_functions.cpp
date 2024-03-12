#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_GreenhouseCeiling.PrimalItemStructure_GreenhouseCeiling_C
// (None)

class UClass* UPrimalItemStructure_GreenhouseCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_GreenhouseCeiling_C");

	return Clss;
}


// PrimalItemStructure_GreenhouseCeiling_C PrimalItemStructure_GreenhouseCeiling.Default__PrimalItemStructure_GreenhouseCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_GreenhouseCeiling_C* UPrimalItemStructure_GreenhouseCeiling_C::GetDefaultObj()
{
	static class UPrimalItemStructure_GreenhouseCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_GreenhouseCeiling_C*>(UPrimalItemStructure_GreenhouseCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


