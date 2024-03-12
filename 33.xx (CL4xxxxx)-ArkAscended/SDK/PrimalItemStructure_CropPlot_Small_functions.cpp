#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_CropPlot_Small.PrimalItemStructure_CropPlot_Small_C
// (None)

class UClass* UPrimalItemStructure_CropPlot_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_CropPlot_Small_C");

	return Clss;
}


// PrimalItemStructure_CropPlot_Small_C PrimalItemStructure_CropPlot_Small.Default__PrimalItemStructure_CropPlot_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_CropPlot_Small_C* UPrimalItemStructure_CropPlot_Small_C::GetDefaultObj()
{
	static class UPrimalItemStructure_CropPlot_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_CropPlot_Small_C*>(UPrimalItemStructure_CropPlot_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


