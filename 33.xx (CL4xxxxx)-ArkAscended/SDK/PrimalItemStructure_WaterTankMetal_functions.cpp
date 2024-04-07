#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WaterTankMetal.PrimalItemStructure_WaterTankMetal_C
// (None)

class UClass* UPrimalItemStructure_WaterTankMetal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WaterTankMetal_C");

	return Clss;
}


// PrimalItemStructure_WaterTankMetal_C PrimalItemStructure_WaterTankMetal.Default__PrimalItemStructure_WaterTankMetal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WaterTankMetal_C* UPrimalItemStructure_WaterTankMetal_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WaterTankMetal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WaterTankMetal_C*>(UPrimalItemStructure_WaterTankMetal_C::StaticClass()->DefaultObject);

	return Default;
}

}


