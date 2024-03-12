#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekLight.EngramEntry_TekLight_C
// (None)

class UClass* UEngramEntry_TekLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekLight_C");

	return Clss;
}


// EngramEntry_TekLight_C EngramEntry_TekLight.Default__EngramEntry_TekLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekLight_C* UEngramEntry_TekLight_C::GetDefaultObj()
{
	static class UEngramEntry_TekLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekLight_C*>(UEngramEntry_TekLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


