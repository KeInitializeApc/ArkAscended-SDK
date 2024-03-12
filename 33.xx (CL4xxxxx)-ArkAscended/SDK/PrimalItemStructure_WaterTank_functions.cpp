#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WaterTank.PrimalItemStructure_WaterTank_C
// (None)

class UClass* UPrimalItemStructure_WaterTank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WaterTank_C");

	return Clss;
}


// PrimalItemStructure_WaterTank_C PrimalItemStructure_WaterTank.Default__PrimalItemStructure_WaterTank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WaterTank_C* UPrimalItemStructure_WaterTank_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WaterTank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WaterTank_C*>(UPrimalItemStructure_WaterTank_C::StaticClass()->DefaultObject);

	return Default;
}

}


