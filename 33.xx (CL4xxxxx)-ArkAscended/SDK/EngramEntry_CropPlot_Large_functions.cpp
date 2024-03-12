#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_CropPlot_Large.EngramEntry_CropPlot_Large_C
// (None)

class UClass* UEngramEntry_CropPlot_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_CropPlot_Large_C");

	return Clss;
}


// EngramEntry_CropPlot_Large_C EngramEntry_CropPlot_Large.Default__EngramEntry_CropPlot_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_CropPlot_Large_C* UEngramEntry_CropPlot_Large_C::GetDefaultObj()
{
	static class UEngramEntry_CropPlot_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_CropPlot_Large_C*>(UEngramEntry_CropPlot_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


