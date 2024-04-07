#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TreePlatformWood.EngramEntry_TreePlatformWood_C
// (None)

class UClass* UEngramEntry_TreePlatformWood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TreePlatformWood_C");

	return Clss;
}


// EngramEntry_TreePlatformWood_C EngramEntry_TreePlatformWood.Default__EngramEntry_TreePlatformWood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TreePlatformWood_C* UEngramEntry_TreePlatformWood_C::GetDefaultObj()
{
	static class UEngramEntry_TreePlatformWood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TreePlatformWood_C*>(UEngramEntry_TreePlatformWood_C::StaticClass()->DefaultObject);

	return Default;
}

}


