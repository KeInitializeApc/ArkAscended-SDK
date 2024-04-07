#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneGateLarge.EngramEntry_StoneGateLarge_C
// (None)

class UClass* UEngramEntry_StoneGateLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneGateLarge_C");

	return Clss;
}


// EngramEntry_StoneGateLarge_C EngramEntry_StoneGateLarge.Default__EngramEntry_StoneGateLarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneGateLarge_C* UEngramEntry_StoneGateLarge_C::GetDefaultObj()
{
	static class UEngramEntry_StoneGateLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneGateLarge_C*>(UEngramEntry_StoneGateLarge_C::StaticClass()->DefaultObject);

	return Default;
}

}


