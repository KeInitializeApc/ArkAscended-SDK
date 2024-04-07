#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Boulder_Fire.EngramEntry_Boulder_Fire_C
// (None)

class UClass* UEngramEntry_Boulder_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Boulder_Fire_C");

	return Clss;
}


// EngramEntry_Boulder_Fire_C EngramEntry_Boulder_Fire.Default__EngramEntry_Boulder_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Boulder_Fire_C* UEngramEntry_Boulder_Fire_C::GetDefaultObj()
{
	static class UEngramEntry_Boulder_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Boulder_Fire_C*>(UEngramEntry_Boulder_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


