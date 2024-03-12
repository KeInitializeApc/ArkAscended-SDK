#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_FishingRod.EngramEntry_FishingRod_C
// (None)

class UClass* UEngramEntry_FishingRod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_FishingRod_C");

	return Clss;
}


// EngramEntry_FishingRod_C EngramEntry_FishingRod.Default__EngramEntry_FishingRod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_FishingRod_C* UEngramEntry_FishingRod_C::GetDefaultObj()
{
	static class UEngramEntry_FishingRod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_FishingRod_C*>(UEngramEntry_FishingRod_C::StaticClass()->DefaultObject);

	return Default;
}

}


