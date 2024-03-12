#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RiotShirt.EngramEntry_RiotShirt_C
// (None)

class UClass* UEngramEntry_RiotShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RiotShirt_C");

	return Clss;
}


// EngramEntry_RiotShirt_C EngramEntry_RiotShirt.Default__EngramEntry_RiotShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RiotShirt_C* UEngramEntry_RiotShirt_C::GetDefaultObj()
{
	static class UEngramEntry_RiotShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RiotShirt_C*>(UEngramEntry_RiotShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


