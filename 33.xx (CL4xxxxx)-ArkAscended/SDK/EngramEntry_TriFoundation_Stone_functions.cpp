#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TriFoundation_Stone.EngramEntry_TriFoundation_Stone_C
// (None)

class UClass* UEngramEntry_TriFoundation_Stone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TriFoundation_Stone_C");

	return Clss;
}


// EngramEntry_TriFoundation_Stone_C EngramEntry_TriFoundation_Stone.Default__EngramEntry_TriFoundation_Stone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TriFoundation_Stone_C* UEngramEntry_TriFoundation_Stone_C::GetDefaultObj()
{
	static class UEngramEntry_TriFoundation_Stone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TriFoundation_Stone_C*>(UEngramEntry_TriFoundation_Stone_C::StaticClass()->DefaultObject);

	return Default;
}

}


