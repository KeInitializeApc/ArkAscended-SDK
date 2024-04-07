#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_SimpleShotgun.EngramEntry_SimpleShotgun_C
// (None)

class UClass* UEngramEntry_SimpleShotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_SimpleShotgun_C");

	return Clss;
}


// EngramEntry_SimpleShotgun_C EngramEntry_SimpleShotgun.Default__EngramEntry_SimpleShotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_SimpleShotgun_C* UEngramEntry_SimpleShotgun_C::GetDefaultObj()
{
	static class UEngramEntry_SimpleShotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_SimpleShotgun_C*>(UEngramEntry_SimpleShotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


