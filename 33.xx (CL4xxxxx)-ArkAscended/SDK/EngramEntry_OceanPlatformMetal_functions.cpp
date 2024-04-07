#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_OceanPlatformMetal.EngramEntry_OceanPlatformMetal_C
// (None)

class UClass* UEngramEntry_OceanPlatformMetal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_OceanPlatformMetal_C");

	return Clss;
}


// EngramEntry_OceanPlatformMetal_C EngramEntry_OceanPlatformMetal.Default__EngramEntry_OceanPlatformMetal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_OceanPlatformMetal_C* UEngramEntry_OceanPlatformMetal_C::GetDefaultObj()
{
	static class UEngramEntry_OceanPlatformMetal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_OceanPlatformMetal_C*>(UEngramEntry_OceanPlatformMetal_C::StaticClass()->DefaultObject);

	return Default;
}

}


