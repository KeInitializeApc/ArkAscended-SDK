#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MetalRailing.EngramEntry_MetalRailing_C
// (None)

class UClass* UEngramEntry_MetalRailing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MetalRailing_C");

	return Clss;
}


// EngramEntry_MetalRailing_C EngramEntry_MetalRailing.Default__EngramEntry_MetalRailing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MetalRailing_C* UEngramEntry_MetalRailing_C::GetDefaultObj()
{
	static class UEngramEntry_MetalRailing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MetalRailing_C*>(UEngramEntry_MetalRailing_C::StaticClass()->DefaultObject);

	return Default;
}

}


