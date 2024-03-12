#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Furniture_WoodBench.PrimalItemStructure_Furniture_WoodBench_C
// (None)

class UClass* UPrimalItemStructure_Furniture_WoodBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Furniture_WoodBench_C");

	return Clss;
}


// PrimalItemStructure_Furniture_WoodBench_C PrimalItemStructure_Furniture_WoodBench.Default__PrimalItemStructure_Furniture_WoodBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Furniture_WoodBench_C* UPrimalItemStructure_Furniture_WoodBench_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Furniture_WoodBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Furniture_WoodBench_C*>(UPrimalItemStructure_Furniture_WoodBench_C::StaticClass()->DefaultObject);

	return Default;
}

}


