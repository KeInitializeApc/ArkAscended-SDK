#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TreePlatformMetal.EngramEntry_TreePlatformMetal_C
// (None)

class UClass* UEngramEntry_TreePlatformMetal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TreePlatformMetal_C");

	return Clss;
}


// EngramEntry_TreePlatformMetal_C EngramEntry_TreePlatformMetal.Default__EngramEntry_TreePlatformMetal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TreePlatformMetal_C* UEngramEntry_TreePlatformMetal_C::GetDefaultObj()
{
	static class UEngramEntry_TreePlatformMetal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TreePlatformMetal_C*>(UEngramEntry_TreePlatformMetal_C::StaticClass()->DefaultObject);

	return Default;
}

}


