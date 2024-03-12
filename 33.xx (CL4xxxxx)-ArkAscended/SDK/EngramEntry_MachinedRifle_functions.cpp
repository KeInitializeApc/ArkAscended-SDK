#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MachinedRifle.EngramEntry_MachinedRifle_C
// (None)

class UClass* UEngramEntry_MachinedRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MachinedRifle_C");

	return Clss;
}


// EngramEntry_MachinedRifle_C EngramEntry_MachinedRifle.Default__EngramEntry_MachinedRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MachinedRifle_C* UEngramEntry_MachinedRifle_C::GetDefaultObj()
{
	static class UEngramEntry_MachinedRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MachinedRifle_C*>(UEngramEntry_MachinedRifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


