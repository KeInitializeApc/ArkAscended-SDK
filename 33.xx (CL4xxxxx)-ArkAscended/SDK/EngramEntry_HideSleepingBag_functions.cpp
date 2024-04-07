#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_HideSleepingBag.EngramEntry_HideSleepingBag_C
// (None)

class UClass* UEngramEntry_HideSleepingBag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_HideSleepingBag_C");

	return Clss;
}


// EngramEntry_HideSleepingBag_C EngramEntry_HideSleepingBag.Default__EngramEntry_HideSleepingBag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_HideSleepingBag_C* UEngramEntry_HideSleepingBag_C::GetDefaultObj()
{
	static class UEngramEntry_HideSleepingBag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_HideSleepingBag_C*>(UEngramEntry_HideSleepingBag_C::StaticClass()->DefaultObject);

	return Default;
}

}


