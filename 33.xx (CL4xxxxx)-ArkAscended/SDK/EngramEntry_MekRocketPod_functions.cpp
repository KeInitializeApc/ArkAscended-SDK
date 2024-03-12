#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MekRocketPod.EngramEntry_MekRocketPod_C
// (None)

class UClass* UEngramEntry_MekRocketPod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MekRocketPod_C");

	return Clss;
}


// EngramEntry_MekRocketPod_C EngramEntry_MekRocketPod.Default__EngramEntry_MekRocketPod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MekRocketPod_C* UEngramEntry_MekRocketPod_C::GetDefaultObj()
{
	static class UEngramEntry_MekRocketPod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MekRocketPod_C*>(UEngramEntry_MekRocketPod_C::StaticClass()->DefaultObject);

	return Default;
}

}


