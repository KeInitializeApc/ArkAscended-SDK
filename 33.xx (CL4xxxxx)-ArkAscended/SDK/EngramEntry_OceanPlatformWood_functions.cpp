#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_OceanPlatformWood.EngramEntry_OceanPlatformWood_C
// (None)

class UClass* UEngramEntry_OceanPlatformWood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_OceanPlatformWood_C");

	return Clss;
}


// EngramEntry_OceanPlatformWood_C EngramEntry_OceanPlatformWood.Default__EngramEntry_OceanPlatformWood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_OceanPlatformWood_C* UEngramEntry_OceanPlatformWood_C::GetDefaultObj()
{
	static class UEngramEntry_OceanPlatformWood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_OceanPlatformWood_C*>(UEngramEntry_OceanPlatformWood_C::StaticClass()->DefaultObject);

	return Default;
}

}


