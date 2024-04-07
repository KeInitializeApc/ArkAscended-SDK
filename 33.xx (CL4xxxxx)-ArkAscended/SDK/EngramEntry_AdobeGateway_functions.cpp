#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdobeGateway.EngramEntry_AdobeGateway_C
// (None)

class UClass* UEngramEntry_AdobeGateway_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdobeGateway_C");

	return Clss;
}


// EngramEntry_AdobeGateway_C EngramEntry_AdobeGateway.Default__EngramEntry_AdobeGateway_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdobeGateway_C* UEngramEntry_AdobeGateway_C::GetDefaultObj()
{
	static class UEngramEntry_AdobeGateway_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdobeGateway_C*>(UEngramEntry_AdobeGateway_C::StaticClass()->DefaultObject);

	return Default;
}

}


