#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_BearTrap.EngramEntry_BearTrap_C
// (None)

class UClass* UEngramEntry_BearTrap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_BearTrap_C");

	return Clss;
}


// EngramEntry_BearTrap_C EngramEntry_BearTrap.Default__EngramEntry_BearTrap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_BearTrap_C* UEngramEntry_BearTrap_C::GetDefaultObj()
{
	static class UEngramEntry_BearTrap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_BearTrap_C*>(UEngramEntry_BearTrap_C::StaticClass()->DefaultObject);

	return Default;
}

}


