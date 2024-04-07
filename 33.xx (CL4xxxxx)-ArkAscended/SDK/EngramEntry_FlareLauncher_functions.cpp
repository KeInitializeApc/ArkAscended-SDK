#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_FlareLauncher.EngramEntry_FlareLauncher_C
// (None)

class UClass* UEngramEntry_FlareLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_FlareLauncher_C");

	return Clss;
}


// EngramEntry_FlareLauncher_C EngramEntry_FlareLauncher.Default__EngramEntry_FlareLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_FlareLauncher_C* UEngramEntry_FlareLauncher_C::GetDefaultObj()
{
	static class UEngramEntry_FlareLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_FlareLauncher_C*>(UEngramEntry_FlareLauncher_C::StaticClass()->DefaultObject);

	return Default;
}

}


