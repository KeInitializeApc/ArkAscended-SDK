#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdobeLadder.EngramEntry_AdobeLadder_C
// (None)

class UClass* UEngramEntry_AdobeLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdobeLadder_C");

	return Clss;
}


// EngramEntry_AdobeLadder_C EngramEntry_AdobeLadder.Default__EngramEntry_AdobeLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdobeLadder_C* UEngramEntry_AdobeLadder_C::GetDefaultObj()
{
	static class UEngramEntry_AdobeLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdobeLadder_C*>(UEngramEntry_AdobeLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


