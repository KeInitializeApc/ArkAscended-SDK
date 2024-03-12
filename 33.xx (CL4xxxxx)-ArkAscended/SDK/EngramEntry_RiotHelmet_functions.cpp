#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RiotHelmet.EngramEntry_RiotHelmet_C
// (None)

class UClass* UEngramEntry_RiotHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RiotHelmet_C");

	return Clss;
}


// EngramEntry_RiotHelmet_C EngramEntry_RiotHelmet.Default__EngramEntry_RiotHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RiotHelmet_C* UEngramEntry_RiotHelmet_C::GetDefaultObj()
{
	static class UEngramEntry_RiotHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RiotHelmet_C*>(UEngramEntry_RiotHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


