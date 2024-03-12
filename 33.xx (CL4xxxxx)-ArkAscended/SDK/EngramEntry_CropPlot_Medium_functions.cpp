#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_CropPlot_Medium.EngramEntry_CropPlot_Medium_C
// (None)

class UClass* UEngramEntry_CropPlot_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_CropPlot_Medium_C");

	return Clss;
}


// EngramEntry_CropPlot_Medium_C EngramEntry_CropPlot_Medium.Default__EngramEntry_CropPlot_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_CropPlot_Medium_C* UEngramEntry_CropPlot_Medium_C::GetDefaultObj()
{
	static class UEngramEntry_CropPlot_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_CropPlot_Medium_C*>(UEngramEntry_CropPlot_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


