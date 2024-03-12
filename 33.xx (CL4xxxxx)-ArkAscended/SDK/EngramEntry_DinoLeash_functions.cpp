#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_DinoLeash.EngramEntry_DinoLeash_C
// (None)

class UClass* UEngramEntry_DinoLeash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_DinoLeash_C");

	return Clss;
}


// EngramEntry_DinoLeash_C EngramEntry_DinoLeash.Default__EngramEntry_DinoLeash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_DinoLeash_C* UEngramEntry_DinoLeash_C::GetDefaultObj()
{
	static class UEngramEntry_DinoLeash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_DinoLeash_C*>(UEngramEntry_DinoLeash_C::StaticClass()->DefaultObject);

	return Default;
}

}


