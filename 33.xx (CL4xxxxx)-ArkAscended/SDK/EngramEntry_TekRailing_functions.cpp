#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekRailing.EngramEntry_TekRailing_C
// (None)

class UClass* UEngramEntry_TekRailing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekRailing_C");

	return Clss;
}


// EngramEntry_TekRailing_C EngramEntry_TekRailing.Default__EngramEntry_TekRailing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekRailing_C* UEngramEntry_TekRailing_C::GetDefaultObj()
{
	static class UEngramEntry_TekRailing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekRailing_C*>(UEngramEntry_TekRailing_C::StaticClass()->DefaultObject);

	return Default;
}

}


