#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodRailing.EngramEntry_WoodRailing_C
// (None)

class UClass* UEngramEntry_WoodRailing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodRailing_C");

	return Clss;
}


// EngramEntry_WoodRailing_C EngramEntry_WoodRailing.Default__EngramEntry_WoodRailing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodRailing_C* UEngramEntry_WoodRailing_C::GetDefaultObj()
{
	static class UEngramEntry_WoodRailing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodRailing_C*>(UEngramEntry_WoodRailing_C::StaticClass()->DefaultObject);

	return Default;
}

}


