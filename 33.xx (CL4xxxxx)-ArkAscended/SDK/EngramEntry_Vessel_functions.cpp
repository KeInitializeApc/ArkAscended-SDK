#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Vessel.EngramEntry_Vessel_C
// (None)

class UClass* UEngramEntry_Vessel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Vessel_C");

	return Clss;
}


// EngramEntry_Vessel_C EngramEntry_Vessel.Default__EngramEntry_Vessel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Vessel_C* UEngramEntry_Vessel_C::GetDefaultObj()
{
	static class UEngramEntry_Vessel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Vessel_C*>(UEngramEntry_Vessel_C::StaticClass()->DefaultObject);

	return Default;
}

}


