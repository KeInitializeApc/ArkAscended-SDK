#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WaterWell.EngramEntry_WaterWell_C
// (None)

class UClass* UEngramEntry_WaterWell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WaterWell_C");

	return Clss;
}


// EngramEntry_WaterWell_C EngramEntry_WaterWell.Default__EngramEntry_WaterWell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WaterWell_C* UEngramEntry_WaterWell_C::GetDefaultObj()
{
	static class UEngramEntry_WaterWell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WaterWell_C*>(UEngramEntry_WaterWell_C::StaticClass()->DefaultObject);

	return Default;
}

}


