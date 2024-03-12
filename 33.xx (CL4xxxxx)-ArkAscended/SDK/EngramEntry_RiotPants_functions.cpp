#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RiotPants.EngramEntry_RiotPants_C
// (None)

class UClass* UEngramEntry_RiotPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RiotPants_C");

	return Clss;
}


// EngramEntry_RiotPants_C EngramEntry_RiotPants.Default__EngramEntry_RiotPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RiotPants_C* UEngramEntry_RiotPants_C::GetDefaultObj()
{
	static class UEngramEntry_RiotPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RiotPants_C*>(UEngramEntry_RiotPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


