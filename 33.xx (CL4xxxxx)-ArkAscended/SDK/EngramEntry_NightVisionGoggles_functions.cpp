#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_NightVisionGoggles.EngramEntry_NightVisionGoggles_C
// (None)

class UClass* UEngramEntry_NightVisionGoggles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_NightVisionGoggles_C");

	return Clss;
}


// EngramEntry_NightVisionGoggles_C EngramEntry_NightVisionGoggles.Default__EngramEntry_NightVisionGoggles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_NightVisionGoggles_C* UEngramEntry_NightVisionGoggles_C::GetDefaultObj()
{
	static class UEngramEntry_NightVisionGoggles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_NightVisionGoggles_C*>(UEngramEntry_NightVisionGoggles_C::StaticClass()->DefaultObject);

	return Default;
}

}


