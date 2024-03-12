#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekCropPlot.EngramEntry_TekCropPlot_C
// (None)

class UClass* UEngramEntry_TekCropPlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekCropPlot_C");

	return Clss;
}


// EngramEntry_TekCropPlot_C EngramEntry_TekCropPlot.Default__EngramEntry_TekCropPlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekCropPlot_C* UEngramEntry_TekCropPlot_C::GetDefaultObj()
{
	static class UEngramEntry_TekCropPlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekCropPlot_C*>(UEngramEntry_TekCropPlot_C::StaticClass()->DefaultObject);

	return Default;
}

}


