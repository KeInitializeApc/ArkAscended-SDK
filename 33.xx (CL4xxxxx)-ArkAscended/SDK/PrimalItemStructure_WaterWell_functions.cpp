#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WaterWell.PrimalItemStructure_WaterWell_C
// (None)

class UClass* UPrimalItemStructure_WaterWell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WaterWell_C");

	return Clss;
}


// PrimalItemStructure_WaterWell_C PrimalItemStructure_WaterWell.Default__PrimalItemStructure_WaterWell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WaterWell_C* UPrimalItemStructure_WaterWell_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WaterWell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WaterWell_C*>(UPrimalItemStructure_WaterWell_C::StaticClass()->DefaultObject);

	return Default;
}

}


