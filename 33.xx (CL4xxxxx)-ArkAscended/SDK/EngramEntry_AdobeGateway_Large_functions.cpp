#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdobeGateway_Large.EngramEntry_AdobeGateway_Large_C
// (None)

class UClass* UEngramEntry_AdobeGateway_Large_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdobeGateway_Large_C");

	return Clss;
}


// EngramEntry_AdobeGateway_Large_C EngramEntry_AdobeGateway_Large.Default__EngramEntry_AdobeGateway_Large_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdobeGateway_Large_C* UEngramEntry_AdobeGateway_Large_C::GetDefaultObj()
{
	static class UEngramEntry_AdobeGateway_Large_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdobeGateway_Large_C*>(UEngramEntry_AdobeGateway_Large_C::StaticClass()->DefaultObject);

	return Default;
}

}


