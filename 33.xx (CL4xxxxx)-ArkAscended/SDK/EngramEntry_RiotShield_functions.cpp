#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RiotShield.EngramEntry_RiotShield_C
// (None)

class UClass* UEngramEntry_RiotShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RiotShield_C");

	return Clss;
}


// EngramEntry_RiotShield_C EngramEntry_RiotShield.Default__EngramEntry_RiotShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RiotShield_C* UEngramEntry_RiotShield_C::GetDefaultObj()
{
	static class UEngramEntry_RiotShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RiotShield_C*>(UEngramEntry_RiotShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


