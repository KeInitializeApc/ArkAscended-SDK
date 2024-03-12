#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MachinedShotgun.EngramEntry_MachinedShotgun_C
// (None)

class UClass* UEngramEntry_MachinedShotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MachinedShotgun_C");

	return Clss;
}


// EngramEntry_MachinedShotgun_C EngramEntry_MachinedShotgun.Default__EngramEntry_MachinedShotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MachinedShotgun_C* UEngramEntry_MachinedShotgun_C::GetDefaultObj()
{
	static class UEngramEntry_MachinedShotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MachinedShotgun_C*>(UEngramEntry_MachinedShotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


