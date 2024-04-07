#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdobeWall.EngramEntry_AdobeWall_C
// (None)

class UClass* UEngramEntry_AdobeWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdobeWall_C");

	return Clss;
}


// EngramEntry_AdobeWall_C EngramEntry_AdobeWall.Default__EngramEntry_AdobeWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdobeWall_C* UEngramEntry_AdobeWall_C::GetDefaultObj()
{
	static class UEngramEntry_AdobeWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdobeWall_C*>(UEngramEntry_AdobeWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


