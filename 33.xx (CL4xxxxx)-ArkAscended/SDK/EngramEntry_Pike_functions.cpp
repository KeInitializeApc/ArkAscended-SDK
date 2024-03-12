#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Pike.EngramEntry_Pike_C
// (None)

class UClass* UEngramEntry_Pike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Pike_C");

	return Clss;
}


// EngramEntry_Pike_C EngramEntry_Pike.Default__EngramEntry_Pike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Pike_C* UEngramEntry_Pike_C::GetDefaultObj()
{
	static class UEngramEntry_Pike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Pike_C*>(UEngramEntry_Pike_C::StaticClass()->DefaultObject);

	return Default;
}

}


