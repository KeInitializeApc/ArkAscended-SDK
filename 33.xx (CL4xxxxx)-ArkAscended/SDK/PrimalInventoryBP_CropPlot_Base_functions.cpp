#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalInventoryBP_CropPlot_Base.PrimalInventoryBP_CropPlot_Base_C
// (None)

class UClass* UPrimalInventoryBP_CropPlot_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalInventoryBP_CropPlot_Base_C");

	return Clss;
}


// PrimalInventoryBP_CropPlot_Base_C PrimalInventoryBP_CropPlot_Base.Default__PrimalInventoryBP_CropPlot_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalInventoryBP_CropPlot_Base_C* UPrimalInventoryBP_CropPlot_Base_C::GetDefaultObj()
{
	static class UPrimalInventoryBP_CropPlot_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalInventoryBP_CropPlot_Base_C*>(UPrimalInventoryBP_CropPlot_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


