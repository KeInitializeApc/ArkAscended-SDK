#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TriCeiling_Stone.EngramEntry_TriCeiling_Stone_C
// (None)

class UClass* UEngramEntry_TriCeiling_Stone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TriCeiling_Stone_C");

	return Clss;
}


// EngramEntry_TriCeiling_Stone_C EngramEntry_TriCeiling_Stone.Default__EngramEntry_TriCeiling_Stone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TriCeiling_Stone_C* UEngramEntry_TriCeiling_Stone_C::GetDefaultObj()
{
	static class UEngramEntry_TriCeiling_Stone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TriCeiling_Stone_C*>(UEngramEntry_TriCeiling_Stone_C::StaticClass()->DefaultObject);

	return Default;
}

}


