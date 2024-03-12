#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MekCannonShell.EngramEntry_MekCannonShell_C
// (None)

class UClass* UEngramEntry_MekCannonShell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MekCannonShell_C");

	return Clss;
}


// EngramEntry_MekCannonShell_C EngramEntry_MekCannonShell.Default__EngramEntry_MekCannonShell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MekCannonShell_C* UEngramEntry_MekCannonShell_C::GetDefaultObj()
{
	static class UEngramEntry_MekCannonShell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MekCannonShell_C*>(UEngramEntry_MekCannonShell_C::StaticClass()->DefaultObject);

	return Default;
}

}


