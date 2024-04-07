#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdobeFloor.EngramEntry_AdobeFloor_C
// (None)

class UClass* UEngramEntry_AdobeFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdobeFloor_C");

	return Clss;
}


// EngramEntry_AdobeFloor_C EngramEntry_AdobeFloor.Default__EngramEntry_AdobeFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdobeFloor_C* UEngramEntry_AdobeFloor_C::GetDefaultObj()
{
	static class UEngramEntry_AdobeFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdobeFloor_C*>(UEngramEntry_AdobeFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


