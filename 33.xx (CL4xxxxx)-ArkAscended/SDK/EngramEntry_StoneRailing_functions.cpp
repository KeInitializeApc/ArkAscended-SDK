#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneRailing.EngramEntry_StoneRailing_C
// (None)

class UClass* UEngramEntry_StoneRailing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneRailing_C");

	return Clss;
}


// EngramEntry_StoneRailing_C EngramEntry_StoneRailing.Default__EngramEntry_StoneRailing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneRailing_C* UEngramEntry_StoneRailing_C::GetDefaultObj()
{
	static class UEngramEntry_StoneRailing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneRailing_C*>(UEngramEntry_StoneRailing_C::StaticClass()->DefaultObject);

	return Default;
}

}


