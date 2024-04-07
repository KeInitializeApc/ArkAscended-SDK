#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_CropPlot_Medium.PrimalItemStructure_CropPlot_Medium_C
// (None)

class UClass* UPrimalItemStructure_CropPlot_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_CropPlot_Medium_C");

	return Clss;
}


// PrimalItemStructure_CropPlot_Medium_C PrimalItemStructure_CropPlot_Medium.Default__PrimalItemStructure_CropPlot_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_CropPlot_Medium_C* UPrimalItemStructure_CropPlot_Medium_C::GetDefaultObj()
{
	static class UPrimalItemStructure_CropPlot_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_CropPlot_Medium_C*>(UPrimalItemStructure_CropPlot_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


