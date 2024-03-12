#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TriCeiling_Adobe.EngramEntry_TriCeiling_Adobe_C
// (None)

class UClass* UEngramEntry_TriCeiling_Adobe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TriCeiling_Adobe_C");

	return Clss;
}


// EngramEntry_TriCeiling_Adobe_C EngramEntry_TriCeiling_Adobe.Default__EngramEntry_TriCeiling_Adobe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TriCeiling_Adobe_C* UEngramEntry_TriCeiling_Adobe_C::GetDefaultObj()
{
	static class UEngramEntry_TriCeiling_Adobe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TriCeiling_Adobe_C*>(UEngramEntry_TriCeiling_Adobe_C::StaticClass()->DefaultObject);

	return Default;
}

}


