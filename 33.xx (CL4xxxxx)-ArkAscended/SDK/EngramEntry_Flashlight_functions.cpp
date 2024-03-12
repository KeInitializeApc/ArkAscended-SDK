#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Flashlight.EngramEntry_Flashlight_C
// (None)

class UClass* UEngramEntry_Flashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Flashlight_C");

	return Clss;
}


// EngramEntry_Flashlight_C EngramEntry_Flashlight.Default__EngramEntry_Flashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Flashlight_C* UEngramEntry_Flashlight_C::GetDefaultObj()
{
	static class UEngramEntry_Flashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Flashlight_C*>(UEngramEntry_Flashlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


