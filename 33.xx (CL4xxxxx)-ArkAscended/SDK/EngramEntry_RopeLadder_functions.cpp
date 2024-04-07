#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RopeLadder.EngramEntry_RopeLadder_C
// (None)

class UClass* UEngramEntry_RopeLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RopeLadder_C");

	return Clss;
}


// EngramEntry_RopeLadder_C EngramEntry_RopeLadder.Default__EngramEntry_RopeLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RopeLadder_C* UEngramEntry_RopeLadder_C::GetDefaultObj()
{
	static class UEngramEntry_RopeLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RopeLadder_C*>(UEngramEntry_RopeLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


