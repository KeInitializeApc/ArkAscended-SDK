#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdobeFenceFoundation.EngramEntry_AdobeFenceFoundation_C
// (None)

class UClass* UEngramEntry_AdobeFenceFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdobeFenceFoundation_C");

	return Clss;
}


// EngramEntry_AdobeFenceFoundation_C EngramEntry_AdobeFenceFoundation.Default__EngramEntry_AdobeFenceFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdobeFenceFoundation_C* UEngramEntry_AdobeFenceFoundation_C::GetDefaultObj()
{
	static class UEngramEntry_AdobeFenceFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdobeFenceFoundation_C*>(UEngramEntry_AdobeFenceFoundation_C::StaticClass()->DefaultObject);

	return Default;
}

}


