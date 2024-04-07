#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneLadder.EngramEntry_StoneLadder_C
// (None)

class UClass* UEngramEntry_StoneLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneLadder_C");

	return Clss;
}


// EngramEntry_StoneLadder_C EngramEntry_StoneLadder.Default__EngramEntry_StoneLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneLadder_C* UEngramEntry_StoneLadder_C::GetDefaultObj()
{
	static class UEngramEntry_StoneLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneLadder_C*>(UEngramEntry_StoneLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


