#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AirConditioner.EngramEntry_AirConditioner_C
// (None)

class UClass* UEngramEntry_AirConditioner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AirConditioner_C");

	return Clss;
}


// EngramEntry_AirConditioner_C EngramEntry_AirConditioner.Default__EngramEntry_AirConditioner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AirConditioner_C* UEngramEntry_AirConditioner_C::GetDefaultObj()
{
	static class UEngramEntry_AirConditioner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AirConditioner_C*>(UEngramEntry_AirConditioner_C::StaticClass()->DefaultObject);

	return Default;
}

}


