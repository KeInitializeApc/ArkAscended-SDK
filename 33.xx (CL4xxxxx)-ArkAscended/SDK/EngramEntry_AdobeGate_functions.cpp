#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdobeGate.EngramEntry_AdobeGate_C
// (None)

class UClass* UEngramEntry_AdobeGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdobeGate_C");

	return Clss;
}


// EngramEntry_AdobeGate_C EngramEntry_AdobeGate.Default__EngramEntry_AdobeGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdobeGate_C* UEngramEntry_AdobeGate_C::GetDefaultObj()
{
	static class UEngramEntry_AdobeGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdobeGate_C*>(UEngramEntry_AdobeGate_C::StaticClass()->DefaultObject);

	return Default;
}

}


