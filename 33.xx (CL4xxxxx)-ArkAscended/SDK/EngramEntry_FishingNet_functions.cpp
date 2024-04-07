#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_FishingNet.EngramEntry_FishingNet_C
// (None)

class UClass* UEngramEntry_FishingNet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_FishingNet_C");

	return Clss;
}


// EngramEntry_FishingNet_C EngramEntry_FishingNet.Default__EngramEntry_FishingNet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_FishingNet_C* UEngramEntry_FishingNet_C::GetDefaultObj()
{
	static class UEngramEntry_FishingNet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_FishingNet_C*>(UEngramEntry_FishingNet_C::StaticClass()->DefaultObject);

	return Default;
}

}


