#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekGrenadeLauncher.EngramEntry_TekGrenadeLauncher_C
// (None)

class UClass* UEngramEntry_TekGrenadeLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekGrenadeLauncher_C");

	return Clss;
}


// EngramEntry_TekGrenadeLauncher_C EngramEntry_TekGrenadeLauncher.Default__EngramEntry_TekGrenadeLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekGrenadeLauncher_C* UEngramEntry_TekGrenadeLauncher_C::GetDefaultObj()
{
	static class UEngramEntry_TekGrenadeLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekGrenadeLauncher_C*>(UEngramEntry_TekGrenadeLauncher_C::StaticClass()->DefaultObject);

	return Default;
}

}


