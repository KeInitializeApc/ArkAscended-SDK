#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodLadder.EngramEntry_WoodLadder_C
// (None)

class UClass* UEngramEntry_WoodLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodLadder_C");

	return Clss;
}


// EngramEntry_WoodLadder_C EngramEntry_WoodLadder.Default__EngramEntry_WoodLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodLadder_C* UEngramEntry_WoodLadder_C::GetDefaultObj()
{
	static class UEngramEntry_WoodLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodLadder_C*>(UEngramEntry_WoodLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


