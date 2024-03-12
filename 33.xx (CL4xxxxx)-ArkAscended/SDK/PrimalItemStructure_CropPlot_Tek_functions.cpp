#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_CropPlot_Tek.PrimalItemStructure_CropPlot_Tek_C
// (None)

class UClass* UPrimalItemStructure_CropPlot_Tek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_CropPlot_Tek_C");

	return Clss;
}


// PrimalItemStructure_CropPlot_Tek_C PrimalItemStructure_CropPlot_Tek.Default__PrimalItemStructure_CropPlot_Tek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_CropPlot_Tek_C* UPrimalItemStructure_CropPlot_Tek_C::GetDefaultObj()
{
	static class UPrimalItemStructure_CropPlot_Tek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_CropPlot_Tek_C*>(UPrimalItemStructure_CropPlot_Tek_C::StaticClass()->DefaultObject);

	return Default;
}

}


