#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekLadder.EngramEntry_TekLadder_C
// (None)

class UClass* UEngramEntry_TekLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekLadder_C");

	return Clss;
}


// EngramEntry_TekLadder_C EngramEntry_TekLadder.Default__EngramEntry_TekLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekLadder_C* UEngramEntry_TekLadder_C::GetDefaultObj()
{
	static class UEngramEntry_TekLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekLadder_C*>(UEngramEntry_TekLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


