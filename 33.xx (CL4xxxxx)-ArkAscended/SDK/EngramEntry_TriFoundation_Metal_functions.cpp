#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TriFoundation_Metal.EngramEntry_TriFoundation_Metal_C
// (None)

class UClass* UEngramEntry_TriFoundation_Metal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TriFoundation_Metal_C");

	return Clss;
}


// EngramEntry_TriFoundation_Metal_C EngramEntry_TriFoundation_Metal.Default__EngramEntry_TriFoundation_Metal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TriFoundation_Metal_C* UEngramEntry_TriFoundation_Metal_C::GetDefaultObj()
{
	static class UEngramEntry_TriFoundation_Metal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TriFoundation_Metal_C*>(UEngramEntry_TriFoundation_Metal_C::StaticClass()->DefaultObject);

	return Default;
}

}


