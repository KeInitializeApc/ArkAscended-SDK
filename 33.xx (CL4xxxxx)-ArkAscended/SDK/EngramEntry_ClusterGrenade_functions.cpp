#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ClusterGrenade.EngramEntry_ClusterGrenade_C
// (None)

class UClass* UEngramEntry_ClusterGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ClusterGrenade_C");

	return Clss;
}


// EngramEntry_ClusterGrenade_C EngramEntry_ClusterGrenade.Default__EngramEntry_ClusterGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ClusterGrenade_C* UEngramEntry_ClusterGrenade_C::GetDefaultObj()
{
	static class UEngramEntry_ClusterGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ClusterGrenade_C*>(UEngramEntry_ClusterGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


