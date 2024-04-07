#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RocketLauncher.EngramEntry_RocketLauncher_C
// (None)

class UClass* UEngramEntry_RocketLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RocketLauncher_C");

	return Clss;
}


// EngramEntry_RocketLauncher_C EngramEntry_RocketLauncher.Default__EngramEntry_RocketLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RocketLauncher_C* UEngramEntry_RocketLauncher_C::GetDefaultObj()
{
	static class UEngramEntry_RocketLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RocketLauncher_C*>(UEngramEntry_RocketLauncher_C::StaticClass()->DefaultObject);

	return Default;
}

}


