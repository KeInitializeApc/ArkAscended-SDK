#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdobeRailing.EngramEntry_AdobeRailing_C
// (None)

class UClass* UEngramEntry_AdobeRailing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdobeRailing_C");

	return Clss;
}


// EngramEntry_AdobeRailing_C EngramEntry_AdobeRailing.Default__EngramEntry_AdobeRailing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdobeRailing_C* UEngramEntry_AdobeRailing_C::GetDefaultObj()
{
	static class UEngramEntry_AdobeRailing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdobeRailing_C*>(UEngramEntry_AdobeRailing_C::StaticClass()->DefaultObject);

	return Default;
}

}


